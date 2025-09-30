/*Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>
int main() {
    int n, flag=1;
    scanf("%d", &n);
    int a[n][n], diag[n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++) diag[i]=a[i][i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(diag[i]==diag[j]) {
                flag=0;
                break;
            }
    if(flag) printf("Distinct\n");
    else printf("Not Distinct\n");
    return 0;
}
