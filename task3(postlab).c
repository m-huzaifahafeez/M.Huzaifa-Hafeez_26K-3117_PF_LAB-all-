#include <stdio.h>

int main() {
    int m;

    printf("Enter marks (0-100): ");
    scanf("%d", &m);

    if (m < 0 || m > 100) {
        printf("Invalid Marks\n");
        return 0;
    }

    if (m >= 90) {
        printf("Grade: A+\n");
        printf("Result: Pass\n");
    } else if (m >= 80) {
        printf("Grade: A\n");
        printf("Result: Pass\n");
    } else if (m >= 70) {
        printf("Grade: B\n");
        printf("Result: Pass\n");
    } else if (m >= 60) {
        printf("Grade: C\n");
        printf("Result: Pass\n");
    } else if (m >= 50) {
        printf("Grade: D\n");
        printf("Result: Pass\n");
    } else {
        printf("Grade: F\n");
        printf("Result: Fail\n");
    }

    return 0;
}