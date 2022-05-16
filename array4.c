
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int ar[a][a];
    int k,j,s=0;
    int p=1;
    
    
    for (int b=0; b<a; b++) {
    for (k=s,p;k<a-s; k++,p++) {
        ar[j][k]=p;
    }
    k--;
    for (j=a-k,p;j<a-s;j++,p++) {
        ar[j][k]=p;
    }
    j--;
    for (k=j-1,p; k>=s; k--,p++) {
        ar[j][k]=p;
    }
    k++;
    for (j=a-k-2,p;j>=s+1;j--,p++) {
        ar[j][k]=p;
    }
    j++;
    
    s++;   
    }
    for (int q=0;q<a; q++) {
        for (int w=0; w<a; w++) {
            printf("%d ", ar[q][w]);
        }
        printf("\n");
    }
}
