#include <stdio.h>

void swapNums(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}
int main(){
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n" , a, b);
    swapNums(&a, &b);

    printf("After swapping: a = %d, b = %d\n" , a, b);

    return 0;
}
