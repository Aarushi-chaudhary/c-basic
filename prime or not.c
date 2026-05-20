#include <stdio.h>
int main () { 
      int n,prime=0;
      printf("Enter n:");
      scanf("%d",&n);
      if(prime<=1) {
     prime=1;
     for ( int i=2;i<=n;i++) {
      if(n%i==0) {
    prime=1;
     break;
      }
    }
    if(prime==0) {
        printf("%d is not a prime number",n);
        return 0;
    }
}
