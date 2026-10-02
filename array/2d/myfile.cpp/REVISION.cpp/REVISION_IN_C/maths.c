#include <stdio.h>
#include<math.h>
int main() {
    int a, b, x;
    float result;
    
    printf("Enter the values of a, b, x: ");
    scanf("%d %d %d", &a, &b, &x);
    
    if ((a * x - b) != 0) {
        result = (float)(a * x + b) / (a * x - b);
        printf("The resultant value is: %f\n", result);
    } else {
        printf("Error: Division by zero (ax-b is zero).\n");
    }

return 0;
}