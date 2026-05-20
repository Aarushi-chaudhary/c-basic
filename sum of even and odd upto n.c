#include <stdio.h>
// sum of even and oddv number
int main() {
    int n,sum1=0,sum2=0;
    printf("Enter n:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++) {
        sum1=n*(n+1);
         // first n even 
         sum2=n*n; //first n odd
    } 
    printf("Sum of even number:%d\n",sum1);
    printf("Sum of odd numbers:%d\n",sum2);
    return 0;
}