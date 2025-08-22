#21. Uma pessoa deseja pregar um quadro em uma parede. Faça um programa para calcular e mostrar a
#que distância a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura em que deseja pregar o quadro.
#Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcançar.

import math

altura = float(input("Altura para o quadro: "))
escada = float(input("Tamanho da escada: "))

if escada > altura:
    y = math.pow(escada, 2) - math.pow(altura, 2)
    y = math.sqrt(y)
    print("A distância deve ser de", y)
else:
    print("A escada deve ser maior que a altura.")