/*Find the sum of main diagonal elements for a square matrix.*/

#include <stdio.h>
int main() {
    int n, sum=0;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
        sum+=a[i][i];
    printf("%d\n",sum);
    return 0;
}
