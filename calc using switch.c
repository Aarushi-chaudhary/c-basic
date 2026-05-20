#include <stdio.h>
int main() {
    int a,b;
    char op;
    int c;
    printf("Enter Two numbers:");
    scanf("%d%d",&a,&b); 
    printf("Enter operator:");
    scanf("%c",&op);
  switch(op) {
    case '+' :
    c=a+b;
    printf("Result is %d",c);
    break;
    case '-':
    c=a-b;
    printf("Result is %d",c);
    break;
    case '*':
    c=a*b;
    printf("Result is %d",c);
    break;
    case '/':
    c=a/b;
    printf("Result is %d",c);
    break;
    default:
    printf("Invalid operator");
  } return 0;
}