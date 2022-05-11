
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
 
    for (int k=0; k<n; k++) {
        arr[k]=k+1;
        printf("%d ", arr[k]);
    }
    printf("\n");
    for (int k=n-1; k>=0; k--) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    return 0;
}
