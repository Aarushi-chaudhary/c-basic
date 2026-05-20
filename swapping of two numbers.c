//swap of two numbers
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d\n",a);
    printf("After swapping b=%d",b);
    return 0;
}