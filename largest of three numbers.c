#include <stdio.h> 
int main() {
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>b&&a>c) {
        printf("Largest number is:%a",a);
    } else if(b>c&&b>a) {
        printf("Largest number is:%d",b);
    } else {
        printf("Largest number is:%d",c);
    } return 0;
}