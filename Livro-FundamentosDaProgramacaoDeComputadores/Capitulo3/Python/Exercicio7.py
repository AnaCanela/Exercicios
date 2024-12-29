#7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

salarioBase = float(input("Digite o salário: "))

imposto = salarioBase * 10 / 100
salario = salarioBase + 50 - imposto

print("\no salário é ", salario)