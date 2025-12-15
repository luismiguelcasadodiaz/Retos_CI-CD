#include <stdio.h>
#include <assert.h>
int suma(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Ejecutando pruebas unitarias...\n");
    
    // Prueba 1: Suma de dos positivos
    assert(suma(3, 4) == 7);
    // Prueba 2: Suma de positivo + negativo
    assert(suma(-3, 4) == 1);
   
    // Prueba 3: Suma de dos negativos
    assert(suma(-3, -4) == -7);

    printf("Todas las pruebas pasaron.\n");
    return 0;
}

