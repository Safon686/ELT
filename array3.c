
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a][a];
    for (int k=0; k<a; k++) {
        for (int j=0; j<a; j++) {
            if (k+j<a-1) {
                arr[k][j]=0;
            }
            if (k+j>=a-1) {
                arr[k][j]=1;
            }
            printf("%d ", arr[k][j]);
        }
    printf("\n") ;   
    }
    return 0;
}
