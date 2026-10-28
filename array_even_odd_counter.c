#include <stdio.h>

int main(){

    int arr[10];
    int size,even,odd;
    even = 0;
    odd = 0;

    size = sizeof(arr) / sizeof(arr[0]);


    printf("Enter 10 elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even %d\n",even);
    printf("Odd %d\n",odd);


    return 0;
}