#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

main()
{

    empilhar(1);
    empilhar(2);
    empilhar(3);

    exibir();

    printf("\n");
    printf("Desenpilhando ");
    printf("\n%i\n", desempilhar());
    
    printf("----------------------\n");
    exibir();


    system("pause");
}
//g++ -g -o out.exe main.c pilha.c