#include <stdio.h>
#include <math.h>

int main()
{
        int opcao;

        while(1)
{

    printf("CALCULADORA DE EQUACOES\n");
    printf("1 - Equacao de 1 grau (ax + b = 0)\n");
    printf("2 - Equacao de 2 grau (ax^2 + bx + c = 0)\n");
    printf("3 - Sobre o programa\n");
    printf("0 - Fechar\n");
    printf("O que deseja?\n");
    scanf("%d", &opcao);

    //  OPCAO DE SAIR
            if(opcao == 0)
        {
            printf("Fechando...\n");
            return 0;
        }

        // EQUAÇÂO DE PRIMEIRO GRAU
    if(opcao == 1)
    {   float a, b, x;

    // EXTRAÇÃO DOS VALORES PARA CALCULAR
    printf("Digite o valor de A:\n");
    scanf("%f", &a);

    printf("Digite o valor de B:\n");
    scanf("%f", &b);


        if(a == 0)  // VERIFICANDO SE É UMA EQUAÇÃO DE PRIMEIRO GRAU
        { printf("Erro, Nao eh uma equacao de 1 grau!\n");
            return 0;}

        else
        { printf("Equacao informada: %.2fx + %.2f = 0\n\n", a, b);}


    //PASSO A PASSO PARA RESOLVER A EQUAÇÂO DE PRIMEIRO GRAU
    printf("Passe o B para o outro lado e inverta o sinal dele\n");
        if(b >= 0)
            printf("%.2fx = -%.2f\n\n", a, b);
        else
            printf("%.2fx = %.2f\n\n", a, -b);


        printf("Agora divida pelo numero do X:\n");
        if(b >= 0)
            printf("X = -%.2f / %.2f\n", b, a);
        else
            printf("X = %.2f / %.2f\n", -b, a);

               x = -b / a;

        //RESULTADO FINAL
            printf("X = %.2f\n", x);
        printf("\nAperte ENTER para retornar ao menu");
    }


        //EQUAÇÂO DE SEGUNDO GRAU
    if(opcao == 2)
    {
        float a, b, c;
        float delta, x1, x2;

        //EXTRAÇÃO DOS VALORES PARA CALCULAR
    printf("Digite o valor de A:\n");
    scanf("%f", &a);

    printf("Digite o valor de B:\n");
    scanf("%f", &b);

    printf("Digite o valor de C:\n");
    scanf("%f", &c);

    //VERIFICANDO SE É UMA EQUAÇÃO DE SEGUNDO GRAU
    if( a == 0)
    {printf("Erro, nao eh uma equacao de 2 grau!\n");
    printf("\nAperte ENTER para retornar ao menu");}

    else
    {printf("Equacao informada: %.2fx^2 + %.2fx + %.2f = 0\n\n", a, b, c);}

    //PASSO A PASSO PARA RESOLVER A EQUAÇÃO DE SEGUNDO GRAU
    printf("Calcule o delta, Delta = b^2 -4 * a * c\n\n");
    printf("Substituindo os valores:\n(%.2f * %.2f) - (4 * %.2f * %.2f)\n", b, b, a, c);

                //CALCULO DO DELTA
            delta = (b * b) - (4 * a * c);

    printf("Delta = %.2f\n\n", delta);


            //ANALISE DO DELTA
    if(delta > 0)
        {
            printf("Delta > 0, existem 2 raizes reais!\n");

            printf("Vamos calcular o X1 e X2\n");

            printf("Calculo do X1: (-b + sqrt(delta)) / (2a)\n\n");

                    x1 = (-b + sqrt(delta)) / (2 * a);

            printf("X1= %.2f\n\n", x1);


            printf("Calculo do x2: (-b - sqrt(delta)) / (2 * a)\n\n");

                    x2 = (-b - sqrt(delta)) / (2 * a);

            printf("X2= %.2f\n\n", x2);

            printf("\nAperte ENTER para retornar ao menu");
        }

    else if(delta == 0)
        {
            printf("Delta = 0, existe apenas 1 raiz real!\n");

            printf("Vamos calcular o x1\n");

            printf("Calculo do X1: -b / (2a)\n\n");

                    x1 = -b / (2 * a);

            printf("X1= %.2f\n", x1);

        }

    else {printf("N�o existem raizes reais.\n");
    printf("\nAperte ENTER para retornar ao menu");}



    }

    if(opcao == 3)
    {printf("Esta calculadora foi desenvolvida por: Kaue chatan\n");
    printf("\nAperte ENTER para retornar ao menu");}
    getchar();
    getchar();

continue;

}
    }

