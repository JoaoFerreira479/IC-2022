def contar_pares_impares(quantidade):
    pares, impares = 0, 0

    for i in range(quantidade):
        numero = int(input(f"Digite o {i + 1}º número: "))

        if numero % 2 == 0:
            pares += 1
        else:
            impares += 1

    exibir_resultado(pares, impares)

def exibir_resultado(pares, impares):
    print("\n===== Resultado =====")
    print(f"Quantidade de números pares: {pares}")
    print(f"Quantidade de números ímpares: {impares}")

def main():
    quantidade = int(input("Quantos números deseja inserir? "))
    contar_pares_impares(quantidade)

if __name__ == "__main__":
    main()
