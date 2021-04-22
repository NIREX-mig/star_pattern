#include<stdio.h>

int main()
{   int r;
    printf("how many rows are print you want: ");
    scanf("%d",&r);
    
    for(int i=0; i<=r; i++)
    {
        for(int j=0; j<=i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
