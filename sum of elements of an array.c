#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for (i=1; i<n;i++);{
        scanf("%d",&arr[i]);
        sum+=arr[i];
    } 
    printf("sum of elements: %d",sum);
    return 0;
}