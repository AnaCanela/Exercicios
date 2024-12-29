#6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

salarioBase = float(input("Digite o salario: "))

gratificacao = salarioBase * 5 / 100
imposto = salarioBase * 7 / 100
salario = salarioBase + gratificacao - imposto

print("\nO salario é ", salario)