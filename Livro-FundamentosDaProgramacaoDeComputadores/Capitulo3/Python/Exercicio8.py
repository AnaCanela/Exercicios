#8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.

deposito = float(input("Digite o valor do depósito: "))
taxaJuros = float(input("Digite o valor da taxa de juros: "))

rendimento = deposito * taxaJuros / 100;
montante = deposito + rendimento

print("Rendimento: ", rendimento)
print("Montante: ", montante)