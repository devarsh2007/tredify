// *
// * *
// * * *
// * * * *
#include <stdio.h>
void main()
{
    // int count=1;
    int n;

    printf("enter number : ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("* ");
        }
        printf("\n");
        // count++;
    }

    // for(int i=1;i<=2;i++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for(int i=1;i<=3;i++)
    // {
    //     printf("*");
    // }
    // printf("\n");

    // for(int i=1;i<=4;i++)
    // {
    //     printf("*");
    // }
    // printf("\n");
}