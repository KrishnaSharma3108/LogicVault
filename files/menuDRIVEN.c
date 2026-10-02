#include<stdio.h>
int main()
 {
    int choice, a=0,b=0,sum=0,mul=0,div=0,sub=0;
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);

    do {
        printf("1.sum\n 2. mul \n3.div \n 4.sub\n5.exit\n");
        printf("enter choice :\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
            //sum=a+b;
            printf("sum=%d\n",a+b);
             break;
            case 2: //mul;
            //a*b;
            printf("mul=%d\n",a*b);
             break;
            case 3: //div ;
            //a/b ;
            printf("div=%d\n",a/b);
             break;
            case 4: //sub;
            printf("sub=%d\n",a-b);
            //a-b;
            break;
            case 5: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }

    } while(choice != 5);
    return 0;
}
