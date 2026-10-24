#include <stdio.h>

int main(){

    int num;

    printf("Enter a Number:\n");
    scanf("%d",&num);

    if(num == 0){
        printf("Zero\n");
    }
    else if(num % 2 == 0){
        printf("Even Number\n");
    }
    else{
        printf("Odd Number\n");
    }

    return 0;
}