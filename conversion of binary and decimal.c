#include <stdio.h>
int main() {
    int num,rem,sum,temp;
    for(num=1;num<100;num++) {
        temp=num;
        sum=0;
        while(temp!=0) {
            rem=temp%10;
            temp=temp/10;
            sum=sum+(rem*rem*rem);
        } 
    }
        if(num==sum) {
            printf("armstrong number is:%d",num);
    } return 0;

}