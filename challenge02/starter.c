#include <stdio.h>


int suma(int a, int b) {
    return a + b;
}
int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    if (b == 0) {
        printf("Error: División por cero\n");
        return 0;
    }
    return a / b;
} 

#ifndef TEST

int main(void) {
    // Ejemplo de uso rápido
    printf("Calculadora básica:\n");

    return 0;
}
#endif
