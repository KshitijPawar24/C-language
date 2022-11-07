#include<stdio.h>

void inp(int in)
{
  
    printf("How many times you wount to print your name: ");
    scanf("%d",&in);


};
void display(int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("kshitij vijay pawar\n");
    }
};
int main()
{
    int in;
    printf("How many times you wount to print your name: ");
    scanf("%d",&in);
    display(in);

    return 0;
}