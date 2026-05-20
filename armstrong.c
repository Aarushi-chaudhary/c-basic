//binary to decimal
#include <stdio.h>
int main() {
  long long n;
  int decimal=0,i=1,rem;
  printf("Enter binary number:");
  scanf("%llb",&n);
  while(n!=0) {
    rem=n%10;
    n/=10;
    decimal+=rem*i;
    i=i*2;
  } 
  printf("Decimal equivalent: %d\n",decimal);
  return 0;
}