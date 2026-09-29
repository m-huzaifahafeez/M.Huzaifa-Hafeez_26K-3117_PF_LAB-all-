#include <stdio.h>

int main() {
    int cap, cur;
    float rate, req_liters, time;
    int mins;
    float cost;

    printf("Enter tank capacity (liters): ");
    scanf("%d", &cap);

    printf("Enter current water level (liters): ");
    scanf("%d", &cur);

    printf("Enter fill rate (liters per min): ");
    scanf("%f", &rate);

    if (cur >= cap) {
        printf("Tank Already Full\n");
        return 0;
    }

    req_liters = cap - cur;
    time = req_liters / rate;

    mins = (int)time;
    if (time > mins) {
        mins = mins + 1;
    }

    cost = mins * 3.50f;

    printf("Required Time: %.2f minutes\n", time);
    printf("Billed Electricity Cost: Rs %.2f\n", cost);

    return 0;
}