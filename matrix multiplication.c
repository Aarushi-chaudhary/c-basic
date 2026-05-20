#include <stdio.h>
#include <math.h>
int main() {
    int r1,r2,c1,c2,k,i,j;
    int a[10][10],b[10][10],res[10][10];
    printf("Enter rows and columns of matriz A:");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns of matrix B:");
    scanf("%d%d",&r2,&c2);
    //check for matrix multiplication possible or not
    if(c1!=r2) {
        printf("Error,matrix multiplication not possible");
    }
    //take input of matrix A
    printf("Enter elements in A:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    } 
}
    //take input of matrix B
    printf("Enter elements in B:");
    for(i=0;i<r2;i++) {
        for(j=0;j<c2;j++) {
            scanf("%d",&b[i][j]);
        }
    }
    //initalize result matrix
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            res[i][j]=0;
        }
    }
    //multiply a and b
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++) {
            for(k=0;k<c1;k++) {
                res[i][j]=res[i][j]+a[i][k]*b[k][j];
            }
        }
    } 
    // output
    printf("Resultant matrix:\n");
    for(i=0;i<r1;i++) {
        for (j=0;j<c2;j++) {
            printf("\t%d",res[i][j]);
        }
        printf("\n");
    } 
    return 0;
}