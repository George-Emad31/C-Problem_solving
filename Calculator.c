#include <stdio.h>
#include <stdlib.h>

int main() {
    char Operator;
    double num1, num2, result;
    int exit = 0;
    char continueCalculation;

    while (exit == 0) {
        printf("Please Enter The 1st Number\n");
        scanf("%lf", &num1);

        printf("Please Choose An Operator (+, -, *, /, or E to exit):\n");
        scanf(" %c", &Operator);

        if (Operator == 'E' || Operator == 'e') {
            printf("The Program Will Close\n");
            exit = 1;
            continue;
        }

        printf("Please Enter The 2nd Number\n");
        scanf("%lf", &num2);

        switch (Operator) {
        default:
            printf("Error! Invalid operator.\n");
            break;
        case '+':
            result = num1 + num2;
            printf("The result is: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("The result is: %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '*':
            result = num1 * num2;
            printf("The result is: %.2lf\n", result);
            break;
        }

        printf("Do you want to continue? (Y to continue, E to exit)\n");
        scanf(" %c", &continueCalculation);

        if (continueCalculation == 'E' || continueCalculation == 'e') {
            printf("The Program Will Close\n");
            exit = 1;
        }
    }

    return 0;
}
