#25. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
# Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo
# do espetáculo seja alcançado.

custo = float(input("Digite o custo do espetáculo: "))
convite = float(input("Digite o Valor do ingresso: "))

quantidade = custo / convite

print("A quantidade mínima de ingressos vendidos deve ser de ", quantidade)