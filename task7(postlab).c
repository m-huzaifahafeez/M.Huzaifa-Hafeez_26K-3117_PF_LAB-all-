#include <stdio.h>

int main() {
    float avg;
    int m, fit;

    printf("Enter batting average: ");
    scanf("%f", &avg);

    printf("Enter matches played: ");
    scanf("%d", &m);

    printf("Enter fitness failure status (1=failed, 0=passed): ");
    scanf("%d", &fit);

    if (m < 5) {
        printf("Rejected - Insufficient Matches\n");
    } else if (avg >= 35.0f && m >= 10) {
        printf("Selected\n");
    } else if (avg >= 25.0f && avg <= 34.99f && m >= 20) {
        if (fit == 1) {
            printf("Rejected - Fitness\n");
        } else {
            printf("Selected (Experience Quota)\n");
        }
    } else {
        printf("Not Selected\n");
    }

    return 0;
}