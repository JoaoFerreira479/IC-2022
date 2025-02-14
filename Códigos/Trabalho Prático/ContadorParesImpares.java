import java.util.Scanner;

public class ContadorParesImpares {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Quantos números deseja inserir? ");
        int quantidade = scanner.nextInt();

        contarParesImpares(quantidade, scanner);

        scanner.close();
    }

    public static void contarParesImpares(int quantidade, Scanner scanner) {
        int pares = 0, impares = 0;

        for (int i = 0; i < quantidade; i++) {
            System.out.printf("Digite o %dº número: ", i + 1);
            int numero = scanner.nextInt();

            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }

        exibirResultado(pares, impares);
    }

    public static void exibirResultado(int pares, int impares) {
        System.out.println("\n===== Resultado =====");
        System.out.println("Quantidade de números pares: " + pares);
        System.out.println("Quantidade de números ímpares: " + impares);
    }
}
