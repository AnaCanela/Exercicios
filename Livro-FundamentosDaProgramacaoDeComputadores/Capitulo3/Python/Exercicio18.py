#8. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
#quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
#mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
#cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.

racao = float(input("DIgite o peso do saco em quilos: "))
gato1 = float(input("Digite a quantidade para o primeiro gato: "))
gato2 = float(input("Digite a quantidade para o segundo gato: "))

gato1 = gato1 / 1000
gato2  = gato2 / 1000
somaGatos = gato1 + gato2
saco = racao - (5 * somaGatos)

print("Restante de ração: ", saco, "KGs")