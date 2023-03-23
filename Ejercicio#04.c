#include <stdio.h>
#include "add.h"

int main() {
    int a, b;

    printf("Ingrese dos valores enteros separados por un espacio: ");
    scanf("%d %d", &a, &b);

    printf("Valor de PI: %0.5d\n", PI);
    printf("Suma: %0.2d\n", add(a, b));
    printf("Resta: %0.2d\n", sub(a, b));
    printf("Multiplicacion: %0.2d\n", multi(a, b));
    printf("Division: %0.2d\n", divis(a, b));

    return 0;
}