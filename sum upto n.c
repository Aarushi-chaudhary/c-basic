//sum of given number
# include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        sum+=i;
    }
        printf("sum is:%d\n",sum);                                                                    

    return 0;
}