#/*8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar
# cada operação.
#Menu de opções:
#    1. Somar dois números.
#    2. Raiz quadrada de um número.
#    Digite a opção desejada:*/

print("\n         Menu")
print("1. Somar dois números.")
print("2. Raiz quadrada de um número.")
x = int(input("Digite a opção desejada:"))

if x == 1:
    num1, num2 = map(float, input("\nDigite dois números: ").split())
    soma = num1 + num2
    print("A soma dos números é", soma, "\n")
elif x == 2:
    num1 = float(input("\nDigite o número:"))
    import math
    raiz  = math.sqrt(num1)
    print("A raiz quadrada de", num1, "é", raiz, "\n")
else:
    print("\nOpção Inválida!\n")