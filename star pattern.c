#include<stdio.h>
void trangular_starpatern(int rows)
{
    for(int i=0; i<=rows; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_trangular_starpatern(int rows)
{
    for(int i=0; i<=rows; i++)
    {
        for(int j=0; j<=rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int number,rows;
    printf("Enter 0 for trangular starpetern and 1 for reverse trangular starpatern\n");
    scanf("%d",&number);
    if(number==0 || number==1)
    {
        printf("How many rows are print\n");
        scanf("%d",&rows);
        switch(number)
        {

        case 0:
            trangular_starpatern(rows);
            break;

        case 1:
            reverse_trangular_starpatern(rows);
            break;
        }
    }
    else{
        printf("incorect selection");
    }
        
    return 0;
}