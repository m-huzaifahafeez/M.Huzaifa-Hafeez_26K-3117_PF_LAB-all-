#include <stdio.h>

int main() {
    float amt, rate = 0.0, bonus, total;
    int net, wknd;

    printf("Enter load amount: ");
    scanf("%f", &amt);

    printf("Enter network code (1=Jazz, 2=Telenor, 3=Ufone): ");
    scanf("%d", &net);

    printf("Enter weekend status (1=weekend, 0=weekday): ");
    scanf("%d", &wknd);

    if (amt < 100) {
        rate = 0.0;
    } else if (amt >= 100 && amt <= 499) {
        if (wknd == 1) {
            if (net == 3) {
                rate = 0.05;
            } else {
                rate = 0.10;
            }
        } else {
            rate = 0.05;
        }
    } else if (amt >= 500) {
        if (net == 1 || wknd == 1) {
            rate = 0.20;
        } else {
            rate = 0.12;
        }
    }

    bonus = amt * rate;
    total = amt + bonus;

    printf("Bonus Amount: Rs %.2f\n", bonus);
    printf("Final Loaded Balance: Rs %.2f\n", total);

    return 0;
}