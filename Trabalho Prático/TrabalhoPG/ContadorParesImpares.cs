using System;

class Program
{
    static void Main()
    {
        Console.Write("Quantos números deseja inserir? ");
        int quantidade = int.Parse(Console.ReadLine());

        ContarParesImpares(quantidade);
    }

    static void ContarParesImpares(int quantidade)
    {
        int pares = 0, impares = 0;

        for (int i = 0; i < quantidade; i++)
        {
            Console.Write($"Digite o {i + 1}º número: ");
            int numero = int.Parse(Console.ReadLine());

            if (numero % 2 == 0)
                pares++;
            else
                impares++;
        }

        ExibirResultado(pares, impares);
    }

    static void ExibirResultado(int pares, int impares)
    {
        Console.WriteLine("\n===== Resultado =====");
        Console.WriteLine($"Quantidade de números pares: {pares}");
        Console.WriteLine($"Quantidade de números ímpares: {impares}");
    }
}
