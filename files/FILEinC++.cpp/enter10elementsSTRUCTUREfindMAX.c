#include <stdio.h>

// Define structure for elements
struct Element {
    int data;
};

int main() {
    struct Element arr[10];
    int max_val;
    int i;

    // Input 10 elements
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i].data);
    }

    // Find maximum
    max_val = arr[0].data;
    for(i = 1; i < 10; i++) {
        if(arr[i].data > max_val) {
            max_val = arr[i].data;
        }
    }

    // Display result
    printf("\nMaximum value: %d\n", max_val);

    return 0;
}
