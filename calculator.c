#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

long long factorial(int n) {
    if (n < 0) return -1;
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int choice;
    double x, y;
    int n;

    do {
        printf("\n===== ADVANCED CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Log (base 10)\n");
        printf("11. Factorial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", add(x, y));
                break;

            case 2:
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", subtract(x, y));
                break;

            case 3:
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", multiply(x, y));
                break;

            case 4:
                scanf("%lf %lf", &x, &y);
                if (y == 0)
                    printf("Error: Division by zero\n");
                else
                    printf("Result = %.2lf\n", divide(x, y));
                break;

            case 5:
                scanf("%lf %lf", &x, &y);
                printf("Result = %.2lf\n", pow(x, y));
                break;

            case 6:
                scanf("%lf", &x);
                printf("Result = %.2lf\n", sqrt(x));
                break;

            case 7:
                scanf("%lf", &x);
                printf("sin(%.2lf) = %.2lf\n", x, sin(x));
                break;

            case 8:
                scanf("%lf", &x);
                printf("cos(%.2lf) = %.2lf\n", x, cos(x));
                break;

            case 9:
                scanf("%lf", &x);
                printf("tan(%.2lf) = %.2lf\n", x, tan(x));
                break;

            case 10:
                scanf("%lf", &x);
                printf("log10(%.2lf) = %.2lf\n", x, log10(x));
                break;

            case 11:
                scanf("%d", &n);
                printf("Factorial = %lld\n", factorial(n));
                break;

            case 0:
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
