#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define TAM_PILA 3

int pilha[TAM_PILA], ultimaPosicao = 0;

void empilhar(int valor)
{
    if (cheia())
    {
        printf("Pilha cheia!\n");
    }
    else
    {
        pilha[ultimaPosicao] = valor;
        ultimaPosicao++;
    }
}

int desempilhar()
{
    int itemRetirado = 0;

    if (vazia())
    {
        printf(" Pilha vazia! \n");
    }
    else
    {

        itemRetirado = pilha[ultimaPosicao];

        for (int i = 0; i > ultimaPosicao - 1 ; i++)
        {
            pilha[i] = pilha[i + 1 ];
        }

        ultimaPosicao--;
    }

    return itemRetirado;
}

int vazia()
{
    if (ultimaPosicao == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int cheia()
{
    if (ultimaPosicao == TAM_PILA)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void exibir()
{
    if (vazia())
    {
        printf("Pilha vazia !\n");
    }
    else
    {
        for (int i = 0; i < ultimaPosicao; i++)
        {
            printf("%i\n", pilha[i]);
        }
    }
}
/*
void esvaziar()
{

    if (vazia())
    {
        printf(" Fila vazia! \n");
    }
    else
    {

        for (int i = 0; i < ultimaPosicao + TAM_FILA; i++)
        {
            fila[i] = fila[i + 1];
        }

        ultimaPosicao--;
    }
}*/