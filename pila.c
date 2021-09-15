#include "pila.h"


void iniciar_pila(P_Pila p)
{
    //reserva espacio de memoria para la pilas
       tipo_dato *aux;
       aux = (tipo_dato *)malloc(50*sizeof(tipo_dato));
       p->valores = aux;
       p->postope=0;
}

void apilar(P_Pila p, tipo_dato dato)
{
    tipo_dato index = (*p).postope;
    (*p).valores[index]=dato;
    (*p).postope = (*p).postope + 1;
}

int desapilar(P_Pila p)
{
       tipo_dato z = p->valores[p->postope -1];
       p->postope--;
       return z;
}

int tope(P_Pila p)
{
       return p->valores[p->postope - 1];
}

int pilavacia(P_Pila p)
{
       return (p->postope == 0);
}

void leer (P_Pila p)
{
    tipo_dato aux ;
    if (p->postope < 50)
    {
        printf("Ingrese un valor: ");
        fflush(stdin);
        scanf("%d", &aux);
        apilar(p, aux);
    }
    else
        printf("Error: la pila esta llena");
}

void mostrar_pila(P_Pila p)
{
    int i;
    printf("\n***********************************************************\n\n");
    for(i=0; i < p->postope; i++)
        printf("- %d ", p->valores[i]);
    printf("\n\n*********************************************************\n\n");
}
