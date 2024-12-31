#11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
 #   a) o numero digitado ao quadrado;
 #   b) o numero digitado ao cubo;
 #   c) a raiz quadrada do numero digitado;
 #   d) a raiz cúbica do numero digitado.

import math

numero = float(input("Digite um número maior que zero: "))

quadrado = numero * numero
cubo = quadrado * numero
raizQ = math.sqrt(numero)
raizC = numero ** (1/3) 

print("\nQuadrado: ", quadrado)
print("Cubo: ", cubo)
print("Raiz quadrada: ", raizQ)
print("Raiz cúbica: ", raizC)