#include<stdio.h>
int main(){
    int number;
    printf("Enter your number:");
    scanf("%d",&number);

    if(number % 2 == 1){
        printf("Number is 1, condition is satisfied");
    }
    else if(number % 2 == 0){
        printf("Number is 0, condition is not satisfied");
    }
    else{
        printf("Other case");
    }
    return 0;
}