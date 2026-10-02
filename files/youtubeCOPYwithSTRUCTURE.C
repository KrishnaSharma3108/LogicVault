#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LEN 100
#define MAX_DESC_LEN 300

typedef struct {
    int id;
    char title[MAX_TITLE_LEN];
    char description[MAX_DESC_LEN];
    int likes;
    int views;
} Video;

const char *filename = "videos.dat";

// Function to upload/save a video to file
void uploadVideo() {
    FILE *fp = fopen(filename, "ab"); // open file in append binary mode
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    Video v;
    printf("Enter video ID (numeric): ");
    scanf("%d", &v.id);
    getchar(); // consume newline from input buffer

    printf("Enter video title: ");
    fgets(v.title, MAX_TITLE_LEN, stdin);
    //v.title[strcspn(v.title, "\n")] = 0; // remove newline

    printf("Enter video description: ");
    fgets(v.description, MAX_DESC_LEN, stdin);
    //v.description[strcspn(v.description, "\n")] = 0; // remove newline

    v.likes = 0;
    v.views = 0;

    fwrite(&v, sizeof(Video), 1, fp);
    fclose(fp);

    printf("Video uploaded and saved successfully!\n");
}

// Function to list all videos from file
void listVideos() {
    FILE *fp = fopen(filename, "rb"); // open file in read binary mode
    if (fp == NULL) {
        printf("No videos found. Upload some first.\n");
        return;
    }

    Video v;
    printf("\n--- Video List ---\n");
    while (fread(&v, sizeof(Video), 1, fp)) {
        printf("ID: %d\nTitle: %s\nDescription: %s\nLikes: %d, Views: %d\n\n",
               v.id, v.title, v.description, v.likes, v.views);
    }
    fclose(fp);
}

// Function to update a video record in the file (to update views and likes)
void updateVideo(Video updatedVideo) {
    FILE *fp = fopen(filename, "rb+"); // open file for read/write binary
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Video v;
    while (fread(&v, sizeof(Video), 1, fp)) {
        if (v.id == updatedVideo.id) {
            fseek(fp, sizeof(Video), SEEK_CUR); // move pointer back to overwrite
            fwrite(&updatedVideo, sizeof(Video), 1, fp);
            break;
        }
    }
    fclose(fp);
}

// Function to find and play a video, update views and likes
void playVideo() {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("No videos to play. Upload some videos first.\n");
        return;
    }

    int id;
    printf("Enter video ID to play: ");
    scanf("%d", &id);

    Video v;
    int found = 0;
    while (fread(&v, sizeof(Video), 1, fp)) {
        if (v.id == id) {
            found = 1;
            v.views++;

            printf("\nPlaying video: %s\n", v.title);
            printf("Description: %s\n", v.description);
            printf("Views: %d, Likes: %d\n", v.views, v.likes);

            printf("\nDo you want to like this video? (1 for Yes, 0 for No): ");
            int like;
            scanf("%d", &like);
            if (like == 1) {
                v.likes++;
                printf("You liked the video.\n");
            }
            break;
        }
    }
    fclose(fp);

    if (!found) {
        printf("Video with ID %d not found.\n", id);
        return;
    }

    // Update the file with new likes and views
    updateVideo(v);
}

void menu() {
    printf("\n==== Simple YouTube with File Handling ====\n");
    printf("1. Upload Video\n");
    printf("2. List Videos\n");
    printf("3. Play Video\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch(choice) {
            case 1: uploadVideo(); break;
            case 2: listVideos(); break;
            case 3: playVideo(); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
