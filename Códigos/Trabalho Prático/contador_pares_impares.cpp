#include <iostream>

using namespace std;

void contarParesImpares(int quantidade);
void exibirResultado(int pares, int impares);

int main()
{
    int quantidade;

    cout << "Quantos números deseja inserir? ";
    cin >> quantidade;

    contarParesImpares(quantidade);

    return 0;
}

void contarParesImpares(int quantidade)
{
    int pares = 0, impares = 0, numero;

    for (int i = 0; i < quantidade; i++)
    {
        cout << "Digite o " << (i + 1) << "º número: ";
        cin >> numero;

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
    cout << "\n===== Resultado =====" << endl;
    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;
}
