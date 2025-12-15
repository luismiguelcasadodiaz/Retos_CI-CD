#include <stdio.h>
#include <assert.h>

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

int multiplicacion(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    assert( b != 0);
    return a / b;
}


/*int main() {
    printf("Calculadora inicializada.\n");
    return 0;
}*/
