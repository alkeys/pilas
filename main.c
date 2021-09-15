#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
int main(int argc, char** argv) {
    Pila pila1;
    iniciar_pila(&pila1);
    apilar(&pila1,4);
    apilar(&pila1,3);
    apilar(&pila1,2);
    apilar(&pila1,1);
    mostrar_pila(&pila1);
    desapilar(&pila1);
    mostrar_pila(&pila1);
    return (EXIT_SUCCESS);
}

