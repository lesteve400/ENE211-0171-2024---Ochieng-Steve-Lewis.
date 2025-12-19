#include <stdio.h>

int main(){
    int count = 15;
    int *pCount = &count;

    *pCount = 25;
     printf("Updated value of count: %d\n" , count);

     return 0;
}
