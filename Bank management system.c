#include <stdio.h>
#include <stdlib.h>

int main() {
    int option = 0;
    int balance = 0;
    int deposit = 0;
    int loan_amount = 0;
    int is_new_user = 1;

    printf("Welcome to the Bank!\n");

    while (1) {
        printf("\nMenu\n");
        printf("1. Check Balance\n");
        printf("2. Register\n");
        printf("3. Deposit\n");
        printf("4. Request Loan\n");
        printf("5. Quit\n");

        printf("Enter an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Your balance is: %d\n", balance);
                break;

            case 2:
                if (!is_new_user) {
                    printf("You are already registered.\n");
                } else {
                    printf("Registration successful!\n");
                    is_new_user = 0;
                }
                break;

            case 3:
                if (is_new_user) {
                    printf("Please register first.\n");
                } else {
                    printf("Enter the amount to deposit: ");
                    scanf("%d", &deposit);
                    balance += deposit;
                    printf("Your new balance is: %d\n", balance);
                }
                break;

            case 4:
                if (is_new_user) {
                    printf("Please register first.\n");
                } else {
                    printf("Enter the loan amount: ");
                    scanf("%d", &loan_amount);
                    if (balance >= 500 && loan_amount <= balance) {
                        balance -= loan_amount;
                        printf("Loan approved! Your new balance is: %d\n", balance);
                    } else {
                        printf("Loan request denied.\n");
                    }
                }
                break;

            case 5:
                printf("Thank you for using our service.\n");
                exit(0);

            default:
                printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}
//hassan guyo
