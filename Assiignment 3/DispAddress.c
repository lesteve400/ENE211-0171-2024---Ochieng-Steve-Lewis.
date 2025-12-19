#include <stdio.h>

int main(){
    int num = 20;
    int *ptr = &num;

    printf("Value of num: %d\n" , num);
    printf("Address of num : %p\n" , &num);
    printf("Value stored in ptr (address): %p\n" , ptr);
    printf("Value accessed using *ptr: %d\n" , *ptr);

    return 0;
}
