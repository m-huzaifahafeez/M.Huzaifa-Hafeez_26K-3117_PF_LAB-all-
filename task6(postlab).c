#include <stdio.h>

int main() {
    int days, book_type, is_priority;
    double fine = 0.0;
    printf("Enter number of overdue days: ");
    scanf("%d", &days);
    printf("Enter book type (1 = Regular, 2 = Reference, 3 = Rare): ");
    scanf("%d", &book_type);
    printf("Priority member? (1 = Yes, 0 = No): ");
    scanf("%d", &is_priority);
    switch (book_type) {
        case 1: 
            if (days <= 7) {
                fine = days * 5.0;
            } else {
                fine = (7 * 5.0) + ((days - 7) * 10.0);
            }
            break;

        case 2: 
            fine = days * 15.0;
            break;

        case 3: 
            fine = days * 30.0;
            break;

        default:
            printf("Invalid book type.\n");
            return 1;
    }
    if (is_priority == 1 && book_type != 3) {
        fine *= 0.80; // Apply 20% discount
    }
    printf("\nTotal Fine: Rs %.2f\n", fine);
    
    if (book_type == 3 && days > 10) {
        printf("Banned from Borrowing\n");
    }
    return 0;
}