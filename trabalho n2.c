#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRODUTOS 200
#define CLIENTES 50

int random(int n)
{
    return rand() % n;
}

int main()
{
    int i,p,c;
    int npro, ncli;
    int compra[CLIENTES];
    float preco[PRODUTOS];
    float total = 0;

    //gera numeros aleatorios
    srand((unsigned)time(NULL));

    //gera a quantidade de produtos
    npro = random(PRODUTOS) + 1;
    for(i = 0; i < npro; i++)
    {
        p = 5 + random(96);        //gera precos entre 5 e 100
        preco[i] = p;
    }

    //gera a quantidade de clientes
    ncli = random(CLIENTES) + 1;

    for(i = 0; i < ncli; i++)
    {
        c = random(npro);   //armazena os produtos comprados
        compra[i] = c;
    }

    printf("Simulacao para:\n");
    printf("%d produtos\n", npro);
    printf("%d clientes\n\n", ncli);
    printf("----------------------------------\n");
    printf("Cliente   Produto   Valor (R$)\n");
    printf("----------------------------------\n");

    for(i = 0; i < ncli; i++)
    {
        printf("%d\t%d\t%.2f\n",
               i,
               compra[i],
               preco[compra[i]]);
               total += preco[compra[i]];      //soma o valor total das vendas
    }

    printf("----------------------------------\n");
    printf("TOTAL DE VENDAS:%.2f\n", total);

    return 0;
}