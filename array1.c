
#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int box[n][n];

for (int i=0; i<n; i++) {
 
 for (int k=0; k<n; k++) {
box[i][k]=k+1+n*i;
printf("%3.d ", box[i][k]);
}
printf("\n");

}
return 0;

}
