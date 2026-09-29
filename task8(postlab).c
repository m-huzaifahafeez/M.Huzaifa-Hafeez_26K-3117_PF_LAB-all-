#include <stdio.h>

int main() {
    int cat, type;
    float bill, rate_s = 0.0, rate_d = 0.0;
    float charge, disc, total;

    printf("Enter Meal Category (1 = Fast Food, 2 = Desi Food, 3 = Chinese): ");
    scanf("%d", &cat);

    printf("Enter Bill Amount: ");
    scanf("%f", &bill);

    printf("Enter Customer Type (1 = Student, 2 = Regular): ");
    scanf("%d", &type);

    switch (cat) {
        case 1:
            rate_s = 0.05;
            break;
        case 2:
            rate_s = 0.08;
            break;
        case 3:
            rate_s = 0.10;
            break;
        default:
            printf("Invalid Selection\n");
            return 0;
    }

    if (type == 1) {
        if (bill >= 1000) {
            rate_d = 0.15;
        } else {
            rate_d = 0.05;
        }
    } else if (type == 2) {
        if (bill >= 1000) {
            rate_d = 0.10;
        } else {
            rate_d = 0.00;
        }
    } else {
        printf("Invalid Selection\n");
        return 0;
    }

    charge = bill * rate_s;
    disc = bill * rate_d;
    total = bill + charge - disc;

    printf("Service Charge: Rs %.2f\n", charge);
    printf("Discount: Rs %.2f\n", disc);
    printf("Final Payable Amount: Rs %.2f\n", total);

    return 0;
}