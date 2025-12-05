#include <stdio.h>
#include <stdlib.h>
#include "atm.h"

int main() {
    float balance = 5000.0;
    int choice;

    if(!login()) {
        printf("Access Denied. Exiting...\n");
        return 0;
    }
    while (1) {
        showMenu();

        printf("Enter Your Choice: ");
        scanf("%d" , &choice);

        switch (choice) {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance = deposit(balance);
            break;

        case 3:
            balance = withdrawAmount(balance);
            break;

        case 4:
            printf("Thsnk you for using the ATM. GoodBye!\n");
            return 0;

        default:
            printf("Invalid Choice. Try Again.\n");
        }
    }
}
