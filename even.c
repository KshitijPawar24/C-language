#include<stdio.h>

int even(int no1)
{   
    int no2;
    no2 = no1 % 2;

    if(no2 == 0)
    {
        printf("%d This no is even", no1);
    }

    else
    {
        printf("%d This no is odd",no1);
    }
    return 0;
};

int main()
{
    int no1;
    printf("Enter Number: ");
    scanf("%d",&no1);
    even(no1);
    return 0;
}