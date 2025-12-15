#include <stdio.h>
#include "calc.h"
#ifdef DEBUG
#include "test_challenge08.h"
#endif



int main() {

#ifdef DEBUG
    // Este código solo se ejecuta si NDEBUG NO está definida
    printf("Ejecutando tests...\n");
    test_suma();
    test_resta();
#endif

    printf("Pipeline local simulado.\n");


    return 0;
}
