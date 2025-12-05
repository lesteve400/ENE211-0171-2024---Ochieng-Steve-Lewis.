#ifndef ATM_H_INCLUDED
#define ATM_H_INCLUDED

int login();
void showMenu();
void checkBalance(float balance);
float deposit(float balance);
float withdrawAmount(float balance);

#endif // ATM_H_INCLUDED
