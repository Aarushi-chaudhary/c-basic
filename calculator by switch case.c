#include <stdio.h>
int main() {
    char ch;
    int a,b,result;
    printf("Enter operator:");
    scanf("%c",&ch);
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    switch(ch) {
        case '+' :
        result=a+b;
        printf("Result is %d",result);
        break;
        case '-':
        result=a-b;
        printf("result is %d",result);
        break;
        case '*':
        result=a*b;
        printf("Result is %d",result);
        break;
        case '/':
        result=a/b;
        printf("Result is %d");
        break;
        case '%':
        result=a%b;
        printf("Result is %d",result);
        break;
        default:
        printf("Invalid operator");
    } 
    return 0;
}