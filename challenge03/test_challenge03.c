


//Generar pruebas unitarias para las funciones definidas en starter.c
#include <stdio.h>
#include <string.h>
size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

void test_mi_strlen() {
    // Caso de prueba 1: Cadena vacía
    if (mi_strlen("") != 0) {
        printf("Test mi_strlen 1 fallido: mi_strlen(\"\") debería ser 0\n");
    } else {
        printf("Test mi_strlen 1 pasado\n");
    }
    // Caso de prueba 2: Cadena normal
    if (mi_strlen("Hola") != 4) {
        printf("Test mi_strlen 2 fallido: mi_strlen(\"Hola\") debería ser 4\n");
    } else {
        printf("Test mi_strlen 2 pasado\n");
    }
}

void test_mi_strcmp() {
    // Caso de prueba 1: Cadenas iguales
    if (mi_strcmp("Hola", "Hola") != 0) {
        printf("Test mi_strcmp 1 fallido: mi_strcmp(\"Hola\", \"Hola\") debería ser 0\n");
    } else {
        printf("Test mi_strcmp 1 pasado\n");
    }
    // Caso de prueba 2: Primera cadena menor
    if (mi_strcmp("Hola", "Mundo") >= 0) {
        printf("Test mi_strcmp 2 fallido: mi_strcmp(\"Hola\", \"Mundo\") debería ser negativo\n");
    } else {
        printf("Test mi_strcmp 2 pasado\n");
    }
    // Caso de prueba 3: Primera cadena mayor
    if (mi_strcmp("Mundo", "Hola") <= 0) {
        printf("Test mi_strcmp 3 fallido: mi_strcmp(\"Mundo\", \"Hola\") debería ser positivo\n");
    } else {
        printf("Test mi_strcmp 3 pasado\n");
    }
}

void test_mi_strcpy() {
    char dest[20];
    // Caso de prueba 1: Copiar cadena normal
    mi_strcpy(dest, "Hola");
    if (strcmp(dest, "Hola") != 0) {
        printf("Test mi_strcpy 1 fallido: dest debería ser \"Hola\"\n");
    } else {
        printf("Test mi_strcpy 1 pasado\n");
    }
    // Caso de prueba 2: Copiar cadena vacía
    mi_strcpy(dest, "");
    if (strcmp(dest, "") != 0) {
        printf("Test mi_strcpy 2 fallido: dest debería ser \"\"\n");
    } else {
        printf("Test mi_strcpy 2 pasado\n");
    }
}

int main(void) {
    test_mi_strlen();
    test_mi_strcmp();
    test_mi_strcpy();
    return 0;
}
