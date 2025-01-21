#15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
#    a) o valor correspondente ao lucro do distribuidor;
#    b) o valor correspondente aos impostos;
#    c) o preço final do veículo.

precoFab = float(input("Digite o preço de fábrica do carro: "))
percLucro = float(input("Digite o percentual de lucro: "))
percImposto = float(input("Digite o percentual de imposto: "))

lucro = precoFab * percLucro / 100
imposto = precoFab * percImposto / 100
precoFinal = precoFab + lucro + imposto

print("\nLucro: ", lucro)
print("Imposto: ", imposto)
print("Valor final do veículo: ", precoFinal)