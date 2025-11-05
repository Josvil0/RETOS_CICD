#include <stdio.h>
#include <stddef.h>

// Implementaciones
size_t mi_strlen(const char *s) {
   size_t len = 0;
   while (s[len] != '\0') {
       len++;
   }
   return len;
}

int mi_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++; s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

//Implementacion : copia caracteres hasta encontrar '\0'
char *mi_strcpy(char *dest, const char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++) != '\0');
    return original_dest;
}

#ifndef TEST
int main(void) {
    printf("Funciones de cadenas inicializadas.\n");
    return 0;
}
#endif

