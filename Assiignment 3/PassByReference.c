#include <stdio.h>

void passByValue(int x){
    x++;
}
void passByReference(int *x){
    (*x++);
}

int main(){
    int num = 10;

    passByValue(num);
    printf("After pass by value: %d\n" , num);

    passByReference(&num);
    printf("After pass by reference: %d\n" , num);

    return 0;
}
