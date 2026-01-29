#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b;
    char op;

    printf("Ingrese operacion (+ - * /): ");
    scanf(" %c", &op);

    printf("Ingrese dos numeros: ");
    scanf("%f %f", &a, &b);

    if (op == '+') printf("Resultado: %.2f\n", a + b);
    else if (op == '-') printf("Resultado: %.2f\n", a - b);
    else if (op == '*') printf("Resultado: %.2f\n", a * b);
    else if (op == '/' && b != 0) printf("Resultado: %.2f\n", a / b);
    else printf("Error\n");

    system("pause");   // 👈 evita que se cierre
    return 0;
}
