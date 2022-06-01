#include <stdio.h>

float func_plus(float a, float b);
float func_minus(float a, float b);
float func_multi(float a, float b);
float func_div(float a, float b);

int  main () {
float a=0,b=0,res=0;
int c=0;
printf("Enter 1st number \n");
scanf(" %f", &a);
printf("Enter 2nd number \n");
scanf(" %f", &b);
printf("Numbers of operation: \n 1. ''+'' \n 2. ''-'' \n 3. ''*'' \n 4. ''/'' \n 5. Exit program \n");
printf("Enter number operation \n");
scanf(" %d", &c);
if (c==1) {
    printf(" %.2f \n ",  func_plus(a,b));
}
if (c==2) {
    printf("%.2f \n", func_minus(a,b));
}
if (c==3) {
    printf("%.2f \n", func_multi(a,b));
}
if (c==4) {
    printf ("%.2f \n", func_div(a,b));
}
if (c==5) {
    printf ("I wish you not a good day, but a wonderful one \n");
}
else 

return 0;
}

