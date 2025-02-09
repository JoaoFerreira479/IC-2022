#include <stdio.h>

void contarParesImpares(int quantidade);
void exibirResultado(int pares, int impares);

int main()
{
    int quantidade;

    printf("Quantos números deseja inserir? ");
    scanf("%d", &quantidade);

    contarParesImpares(quantidade);

    return 0;
}

void contarParesImpares(int quantidade)
{
    int pares = 0, impares = 0, numero;

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    exibirResultado(pares, impares);
}

void exibirResultado(int pares, int impares)
{
    printf("\n===== Resultado =====\n");
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
}
