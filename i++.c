#include<stdio.h>

void main()
{
    int i1, i2, i3, i4;
    i1 = 10;
    printf("%d,", i1++);
    printf("%d\n", i1);
    i2 = 10;
    printf("%d\n", ++i2);
    i3 = 10;
    printf("%d,", i3--);
    printf("%d\n", i3);
    i4 = 10;
    printf("%d\n", --i4);
}
