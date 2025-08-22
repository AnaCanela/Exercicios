#24. Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a hora digitada
#apenas em minutos. Lembre-se de que:
# - para quatro e meia, deve-se digitar 4.30;
# - os minutos vão de 0 a 59.

import math

hora = float(input("Digite as horas: "))

h = math.floor(hora)
m = hora - h
conversao = (h * 60) + (m * 100)

print("As horas convertidas em minutos são", conversao)