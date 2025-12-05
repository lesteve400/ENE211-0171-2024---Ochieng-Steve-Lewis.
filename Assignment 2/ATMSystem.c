#include <stdio.h>
#include "atm.h"

void checkBalance(float balance) {
    printf("Balance: %.2f\n" , balance);
}

float deposit(float balance) {
    float amount;
    printf("Enter Amount to deposit: ");
    scanf("%f" , &amount);

    if(amount <= 0) {
       printf("Invalid Amount! Enter a positive number\n");
       return balance;
    }
    balance += amount;
    printf("Deposit Success. New Balance: %.2f\n" , balance);
    return balance;
}

float withdrawAmount(float balance) {
    float amount;
    printf("Enter Amount to withdraw: ");
    scanf("%f" , &amount);

    if(amount <= 0) {
        printf("Invalid Amount! Enter a positive number\n");
        return balance;
    }

    if(amount > balance) {
        printf("Insufficient Balance\n");
        return balance;
    }

    balance -= amount;
    printf("Withdraw Success. New Balance: %.2f\n" , balance);
    return balance;
}

