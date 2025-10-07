#10. Em um campeonato de futebol existem cinco times e cada um possui onze jogadores. Faça um
# programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
#■ a quantidade de jogadores com idade inferior a 18 anos;
#■ a média das idades dos jogadores de cada time;
#■ a média das alturas de todos os jogadores do campeonato; e
#■ a porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato.

times = 6
jogadores = 12
menores = 0
mediaAltura = 0
porcPeso = 0

for i in range(1, times):
    mediaIdade = 0
    print("Time ", i, ": ")
    for j in range(1, jogadores):
        print("\nJogador ", j, "do time ", i)
        idade = int(input("Digite a idade: "))
        peso = float(input("Digite o peso: "))
        altura = float(input("Digite a altura: "))

        if idade < 18:
            menores += 1
        if peso > 80:
            porcPeso += 1
        mediaIdade += idade
        mediaAltura += altura
    mediaIdade = mediaIdade / 11
    print("\nMédia das idades: ", mediaIdade)
print("Menores de 18 anos: ", menores)
mediaAltura = mediaAltura / 55
print("Média das alturas: ", mediaAltura)
porcPeso = porcPeso * 100/55
print("Porcentagem dos pesados: ", porcPeso)