#2. Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E,
# conforme a fórmula a seguir: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

n = int(input("Digite um número inteiro positivo: "))

E = 1
i = 1
fat = 1

while i <= n:
    fat *= i
    E += 1 / fat
    i += 1


print(E)