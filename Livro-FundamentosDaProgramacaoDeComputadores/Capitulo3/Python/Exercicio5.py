#5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

salario = float(input("Digite o salário: "))
percentual = float(input("Digite o percentual de aumento: "))

aumento = salario * percentual / 100
novoSalario = salario + aumento

print("\nAumento: ", aumento)
print("Novo Salário: ", novoSalario)