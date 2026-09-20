#include<stdio.h>
int main()
{
    float num1, num2, num3,sum,difference,product,quotient;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    difference = num1 - num2 - num3;
    product = num1 * num2 * num3;
    q = sum / 3;
    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", difference);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", q);
    return 0;
}s