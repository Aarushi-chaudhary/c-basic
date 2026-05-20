#include <stdio.h>;
int main() {
    int n,r,rev;
    printf("Enter number:");
    scanf("%d",&n);
    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    } 
    printf("Reverse is %d",rev);
    return 0;
}
// reverse of number