#4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
# digitará três números diferentes.

num1, num2, num3 = map(float, input("Digite três números: ").split())

if num1 < num2 < num3:
    print("\n")
    print(num1, "-", num2, "-", num3)
elif num1 < num3 < num2:
    print("\n")
    print(num1, "-", num3, "-", num2)
elif num2 < num1 < num3:
    print("\n")
    print(num2, "-", num1, "-", num3)
elif num2 < num3 < num1:
    print("\n")
    print(num2, "-", num3, "-", num1)
elif num3 < num1 < num2:
    print("\n")
    print(num3, "-", num1, "-", num2)
elif num3 < num2 < num1:
    print("\n")
    print(num3, "-", num2, "-", num1)