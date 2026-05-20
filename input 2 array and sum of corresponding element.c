#include <stdio.h>
int main() {
    int n,i;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int arr1[n],arr2[n],sum[n];
    printf("Enter elements in first array:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr1[i]);
    } 
    printf("Enter elements in second array");
    for(i=0;i<n;i++) {
        scanf("%d",&arr2[i]);
    } 
    for(i=0;i<n;i++) {
        sum[i]=arr1[i]+arr2[i];
    } 
    printf("Sum is:");
    for (i=0;i<n;i++){
    printf("%d ",sum[i]);
    }
    return 0;
}