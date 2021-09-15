#include <stdio.h>
#include <malloc.h>
#define Pila struct _Pila
#define P_Pila struct _Pila *

typedef int tipo_dato;

struct _Pila
{
    tipo_dato *valores;
    tipo_dato postope;
};

void iniciar_pila(P_Pila p);

void apilar(P_Pila p, int dato);

tipo_dato desapilar(P_Pila p);

tipo_dato tope(P_Pila p);

tipo_dato pilavacia(P_Pila p);

void leer(P_Pila p);

void mostrar_pila(P_Pila p);


