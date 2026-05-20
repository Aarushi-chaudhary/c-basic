#include <stdio.h>
#include <math.h>
int main(){
    float p,r,n,t,SI,CI;
    printf("Enter principle:");
    scanf("%f",&p);
    printf("Enter Rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    printf("Enter is:");
    scanf("%f",n);
    SI=r*t;
    printf("Simple interest:%d\n",&SI);
    CI=p*(pow(1+r/100,n*t));
    printf("Compound interest is:%f",CI);
    return 0;
}