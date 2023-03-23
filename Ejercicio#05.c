#include <stdio.h>

int main() {
    int n = 8; /* se define el tamaño del array*/
    int arr[n]; /* se procede a declarar el array*/
    int *ptr = arr; /* apuntar al primer elemento en el array*/

    printf("Ingrese %d valores enteros:\n", n); /*Se ingresan los valores por parte del usuario*/
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Array multiplicado por 2:\n"); /*se muestra el array mul x2*/
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr * 2);
        ptr++; 
    }
    printf("\n");

    return 0;
}
