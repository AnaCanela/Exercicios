#/*17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária. 
# Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.
# Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado

salario = float(input("Digite o salário depositado: "))
cheque1 = float(input("Digite o valor do cheque 1: "))
cheque2 = float(input("Digite o valor do cheque 2: "))

cheque1 = cheque1 + (cheque1 * 0.38 / 100)
cheque2 = cheque2 + (cheque2 * 0.38 / 100)
saldo = salario - cheque1 - cheque2

print("Seu saldo bancário é R$ ", saldo)