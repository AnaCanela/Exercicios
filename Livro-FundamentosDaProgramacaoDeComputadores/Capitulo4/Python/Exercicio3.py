#3. Faça um programa que receba dois números e mostre o maior.

num1, num2 = map(float, input("Digite dois números: ").split())

if num1 > num2:
    print(num1, "é maior")
else:
    print(num2, "é maior")