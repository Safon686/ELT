#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20; 
    int *ptr1;
    ptr1=&a;
    int **ptr2;
    ptr2=&ptr1;
    **ptr2=b;
    ptr1=*ptr2;
    printf("%d \n", *ptr1);
    return 0;
}
