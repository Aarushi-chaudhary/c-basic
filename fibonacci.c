#include <stdio.h>
int main() {
    int n,t1=0,t2=1,nexttrm;
    printf("Enter n:");
    scanf("%d",&n);
        for(int i=1;i<=n;i++) {
            printf("%d\n ",t1);
       nexttrm=t1+t2;
       t1=t2;
       t2=nexttrm;
        }
        printf("fibconi series:%d\n",nexttrm);
     return 0;
    }