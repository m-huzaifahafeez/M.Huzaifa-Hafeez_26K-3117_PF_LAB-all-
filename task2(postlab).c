#include<stdio.h>
int main()
{

    float bill, disc_rate = 0.0, disc_amt, final_amt;
    int is_member;

    printf("Enter total bill amount: ");
    scanf("%f", &bill);

    printf("Enter membership status (1 for member, 0 for non-member): ");
    scanf("%d", &is_member);

    if (bill < 500) {
        disc_rate = 0.0;
    } else if (bill >= 500 && bill <= 1999) {
        if (is_member == 1) {
            disc_rate = 0.10;
        } else {
            disc_rate = 0.05;
        }
    } else if (bill >= 2000) {
        if (is_member == 1) {
            disc_rate = 0.15;
        } else {
            disc_rate = 0.08;
        }
    }

    disc_amt = bill * disc_rate;
    final_amt = bill - disc_amt;

    printf("Discount Amount: Rs %.2f\n", disc_amt);
    printf("Final Payable Amount: Rs %.2f\n", final_amt);

    return 0;
}
