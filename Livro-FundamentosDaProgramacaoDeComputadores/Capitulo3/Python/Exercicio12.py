#12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

a = int(input("Digite um valor A maior que zero: "))
b = int(input("Digite um valor B maior que zero: "))

pot1 = pow(a,b)
pot2 = pow(b,a)

print("A elevado a B: ", pot1)
print("B elevado a A: ", pot2)