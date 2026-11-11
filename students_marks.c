#include <stdio.h>

int main() {
    float m1, m2, m3, total, avg;

    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f\n", avg);

    if (avg >= 75) {
        printf("Grade: Distinction\n");
    } else if (avg >= 60) {
        printf("Grade: First Class\n");
    } else if (avg >= 50) {
        printf("Grade: Second Class\n");
    } else if (avg >= 35) {
        printf("Grade: Pass\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}
