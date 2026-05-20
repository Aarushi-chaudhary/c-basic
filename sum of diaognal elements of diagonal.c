#include <stdio.h>
int main() {
    int r1,r2,c1,c2,i,j,k;
    int a[i][j],b[i][j],res[i][j];
    printf("Enter rows and columns of matrix A:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of matrix B:");
    scanf("%d%d",&r2,&c2);
    printf("Enter elements in a:");
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++) {
    scanf("%d",&a[i][j]);
    }
}
    printf("Enter elements in b:");
    for(i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            res[i][j]=0;
        }
    }
    for(i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            for (k=0;k<c1;k++) {
                res[i][j]+=a[i][k]*b[k][i];
            }
        }
    } 
    printf("Resultant Matrix:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            printf("%d\t",res[i][j]);
        } printf("\n");
    } 
    return 0;

}