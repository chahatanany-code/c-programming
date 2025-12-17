#include <stdio.h>

int main() {
    int age;
    float weight;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("\nYou entered:\n");
    printf("Age = %d\n", age);
    printf("Weight = %.1f\n", weight);

    return 0;
}
// Git commit practice
