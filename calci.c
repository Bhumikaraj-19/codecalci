#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float divi(float a, float b);

int main() {
    float a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
 
    printf("Choose an operation: ( +, -,*,/):");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = add(a, b);
            printf("The sum of %f and %f is %f\n", a, b, result);
            break;
        case '-':
            result = sub(a, b);
            printf("The difference of %f and %f is %f\n", a, b, result);
            break;
        case '*':
            result = mul(a, b);
            printf("The product of %f and %f is %f\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                result = divi(a, b);
                printf("The division of %f by %f is %f\n", a, b, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Invalid op.\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}
float mul(float a, float b) {
    return a * b;
