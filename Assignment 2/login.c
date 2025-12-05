#include <stdio.h>
#include "atm.h"

int login() {
    int correctPin = 1234;
    int pin, attempts = 0;

    while (attempts < 3) {
        printf("Enter Pin: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Login Succesfull\n");
            return 1;
        }
        attempts++;
        printf("Incorrect Pin. Attempts remaining: %d\n" , 3 - attempts);
    }
    return 0;
}
