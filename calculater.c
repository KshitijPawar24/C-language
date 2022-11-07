#include<stdio.h>

//Addition
int addition(int no1, int no2)
{
    int no3;
    no3 = no1 + no2;
    return no3;
};

//Subtaction
int subtraction(int no1, int no2)
{
    int no3;
    no3 = no1 - no2;
    return no3;
};

//Multipication
int multiplication(int no1, int no2)
{
    int no3;
    no3 = no1 * no2;
    return no3;
};

//Division
int division(int no1,int no2)
{
    int no3;
    no3 = no1 / no2;
    return no3;
};


//We are using these funcation to chouse the matheded
int calculeter(int num1, int num2, int num3)
{
    int ans, i;


    if (num3 == 1)
    {
        ans = addition(num1, num2);
        printf("\nAddition of given numbers: %d\n\n", ans);
    }

    if (num3 == 2)
    {
        ans = subtraction(num1, num2);
        printf("\nSubtraction of given numbers: %d\n\n", ans);
    }

    if(num3 == 3)
    {
        ans = multiplication(num1, num2);
        printf("\nMultiplication of given numbers: %d\n\n", ans);
    }

    if(num3 == 4)
    {
        ans = division(num1, num2);
        printf("\nDivision of given numbers: %d\n\n", ans);
    }
    return 0;

};


int main()
{    
    int no1, no2, no3;
    printf("Enter the fist number: ");
    scanf("%d", &no1);
    printf("Ener the secound number: ");
    scanf("%d", &no2);
    printf("\n1. Addition\n2. Subtraction\n3. Multipication\n4. Division\nEnter the number: ");
    scanf("%d", &no3);
    calculeter(no1, no2, no3);
    return 0;
}