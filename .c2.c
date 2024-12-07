#include <stdio.h>

int main(void)
{
    int i;
    float f, sum;

    // Prompt for integer input
    printf("Enter an integer number: ");
    scanf("%d", &i);

    // Prompt for floating-point input
    printf("Enter a floating point number: ");
    scanf("%f", &f);

    // Calculate the sum of the integer and floating-point number
    sum = i + f;

    // Print the sum with 4 decimal places
    printf("The sum of %d and %.4f is %.4f\n", i, f, sum);

    return 0;
}

