
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n],ar[n];
    for (int k=0; k<n; k++) {
        arr[k]=k+1;
    }
    
    for (int k=n-1, i=0; k>=0; k--,i++) {
        ar[k]=arr[i];
        
    }
    for (int k=0; k<n; k++) {
        printf("%d ", ar[k]);
        
    }
    
    printf("\n");

    return 0;
}
