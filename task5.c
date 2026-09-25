#include <stdio.h>

int main() {
    int account_type, transaction_type, permission;

    printf("Enter account type (1=Savings, 2=Current, 3=Salary): ");
    scanf("%d", &account_type);
    printf("Enter transaction type (1=Withdraw, 2=Balance Check, 3=Mini Statement): ");
    scanf("%d", &transaction_type);

    switch (account_type) {
        case 1:
            permission = 3;
            break;
        case 2:
            permission = 7;
            break;
        case 3:
            permission = 5;
            break;
        default:
            printf("Invalid Selection\n");
            return 0;
    }

    switch (transaction_type) {
        case 1:
            if (permission & 1) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for this Account Type\n");
            }
            break;
        case 2:
            if (permission & 2) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for this Account Type\n");
            }
            break;
        case 3:
            if (permission & 4) {
                printf("Transaction Approved\n");
            } else {
                printf("Transaction Denied for this Account Type\n");
            }
            break;
        default:
            printf("Invalid Selection\n");
    }

    return 0;
}