#include <stdio.h>
int main() {
    float a,b,c,d,e,sum;
    float percentage;
    //a marks of first sumbject
    //b marks of second subject
    //c marks of third subject
    //d marks of fourth subject
    //e marks of fifth subject
printf("Enter a:");
scanf("%f",&a);
printf("Enter b:");
scanf("%f",&b);
printf("Enter c:");
scanf("%f",&c);
printf("Enter d:");
scanf("%f",&d);
printf("Enter e:");
scanf("%f",&e);
//sum
sum=a+b+c+d+e;
printf("sum is %f\n",sum);
percentage = ((sum/500)*100);
printf("Percentage is: %f",percentage);
return 0;
}