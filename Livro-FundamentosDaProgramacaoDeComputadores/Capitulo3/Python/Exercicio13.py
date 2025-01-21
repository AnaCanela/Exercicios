#13. Sabe-se que:
#    pé = 12 polegadas
#    1 jarda = 3 pés
#    1 milha = 1,760 jarda
#Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
#    a) polegadas;
#    b) jardas;
#    c) milhas.

pes = float(input("Digite a medida em pés: "))

polegadas = pes * 12
jarda = pes / 3
milha = jarda / 1760

print("\nPolegadas: ", polegadas)
print("Jarda: ", jarda)
print("Milha: ", milha)