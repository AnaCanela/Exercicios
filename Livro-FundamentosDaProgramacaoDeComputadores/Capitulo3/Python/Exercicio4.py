#4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
# sabendo-se que este sofreu um aumento de 25%.

salario = float(input("Digite seu salário: "))
aumento = salario * 25 / 100
novoSal = salario + aumento
print("Seu novo salário é: R$ ", novoSal)