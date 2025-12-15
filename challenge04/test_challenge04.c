#include "calc.h"
#include <stdio.h>
#include <assert.h>

int main() {
    printf("Probando la Calculadora modularizada.\n");
    assert ( suma(3,4) == 7);
    assert ( resta(3,4) == -1);
    assert ( resta(4,3) == 1);    
    assert ( multiplicacion(3,4) == 12);    
    assert ( division(3,4) == 0);        
    assert ( division(3,0) == 0);     

    printf("Preubas satisfactorios.\n");
    return 0;
}