#include <stdio.h>
#include <assert.h>


int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);



int main(void) {
    // Pruebas para la función suma
    assert(suma(2, 3) == 5);
    assert(suma(5, -2) == 3);
    assert(suma(-4, -6) == -10);
    assert(suma(0, 7) == 7);
    printf("Pruebas de suma pasadas\n");
    // Pruebas para la función resta
    assert(resta(5, 3) == 2);
    assert(resta(2, 5) == -3);
    assert(resta(-4, -6) == 2);
    assert(resta(0, 7) == -7);
    printf("Pruebas de resta pasadas\n");
    // Pruebas para la función multiplicacion
    assert(multiplicacion(2, 3) == 6);
    assert(multiplicacion(-2, 3) == -6);
    assert(multiplicacion(-2, -3) == 6);
    assert(multiplicacion(0, 7) == 0);
    printf("Pruebas de multiplicacion pasadas\n");
    // Pruebas para la función division
    assert(division(6, 3) == 2);
    assert(division(-6, 3) == -2);
    assert(division(-6, -3) == 2);
    assert(division(7, 2) == 3); // División entera
    // Prueba de división por cero
    assert(division(7, 0) == 0);
    printf("Pruebas de division pasadas\n");

    printf("Todas las pruebas pasaron exitosamente.\n");
    return 0;
}
