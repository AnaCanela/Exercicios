#22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do 
#salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e mostre:
#a) o valor de cada quilowatt;
#b) o valor a ser pago por essa residência;
#c) o valor a ser pago com desconto de 15%.

salario = float(input("Digite o salário: "))
Kw = float(input("Digite a quantidade de quilowatt consumida: "))

valorKw = salario / 5
valorReais = valorKw * Kw
desconto = valorReais * 15 / 100
valorDesc = valorReais - desconto

print("Valor quilowaat: ", valorKw)
print("Valor a ser pago: ", valorReais)
print("Valor com desconto: ", valorDesc)