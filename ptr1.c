
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the number \n");
    scanf("%d", &a);
    char *n1,*n2,*n3,*n4,c;
    n1=&a;
    n2=n1+1;
    n3=n1+2;
    n4=n1+3;
    printf ("%d %d %d %d \n", *n1, *n2, *n3, *n4);
    //*n1=*n1+1;
    printf("Enter number of element for edit \n");
    scanf(" %d", &b);
    printf("Enter new element \n");
    switch (b) {
        case 1:
            scanf(" %hd", &c);
            *n1=c;
            break;
        case 2:
            scanf(" %hd", &c);
            *n2=c;
            break;
        case 3:
            scanf(" %hd", &c);
            *n3=c;
            break;  
        case 4:
            scanf(" %hd", &c);
            *n4=c;
            break;
        default:
            break;
}
    printf ("%d %d %d %d \n", *n1, *n2, *n3,*n4);
    printf("%d \n", a);
    return 0;
}
