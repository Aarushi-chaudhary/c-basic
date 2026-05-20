#include <stdio.h>
int main () {
    int arr[]={65,78,2,55,7,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<size;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[0]<min) {
            min=arr[i];
        }
    } 
    printf("Maximum is:%d\n",max);
    printf("Minimum is: %d\n",min);
    return 0;
}