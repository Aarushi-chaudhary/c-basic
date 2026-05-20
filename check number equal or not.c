#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    if(a==b) {
        printf("Given number are equal");
    } else {
        printf("Given number are not equal");
    } return 0;
}