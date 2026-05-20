//grade base on marks 
// A+ for marks>=90
// A for marks>=80
// B for marks >=60
// C for marks >=50
// D for marks >=30
// fail for marks <30

#include <stdio.h>
int main() {
int marks;
printf("Enter marks:");
scanf("%d",&marks);
if(marks>=0 && marks<=100){
    if(marks >=90) {
        printf("Grade is A+");
    } else if (marks >=80) {
        printf("Grade is A");
    } else if(marks >=60) {
        printf("Grade is B");
    } else if(marks >=50) {
        printf("Grade is C");
    } else if(marks>=30) {
        printf("Grade is D");
    } else {
        printf("Fail");
    }
}
else {
    printf("incorrect marks");
}

 return 0;
}