#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int size;
    int even_count = 0;
    int odd_count = 0;
    printf("Enter number of elements:");
    scanf("%d",&size);
    printf("Enter your array elements:");
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("Number of even numbers = %d\n",even_count);
    printf("Number of odd numbers = %d\n",odd_count);
    return 0;
}
