// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[][3]={{1,2,3}, {10,2,3}, {1,2,3}};
    
    for(int i=0;i<3;i++)
    { 
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}