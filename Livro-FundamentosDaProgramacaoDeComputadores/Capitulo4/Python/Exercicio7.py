#7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e C são reais.
# Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o valor digitado para I seja sempre um valor válido,
# ou seja, 1, 2 ou 3, e que os números digitados sejam diferentes um do outro.*/

A, B, C = map(float, input("Digite três números: ").split())
I = int(input("Digite 1, 2 ou 3: "))

if I == 1:
    if A < B < C:
        print("\n", A, "-", B, "-", C, "\n")
    elif A < C < B:
        print("\n", A, "-", C, "-", B, "\n")
    elif B < A < C:
        print("\n", B, "-", A, "-", C, "\n")
    elif B < C < A:
        print("\n", B, "-", C, "-", A, "\n")
    elif C < A < B:
        print("\n", C, "-", A, "-", B, "\n")
    elif C < B < A:
        print("\n", A, "-", B, "-", C, "\n")
elif I == 2:
    if A > B > C:
        print("\n", A, "-", B, "-", C, "\n")
    elif A > C > B:
        print("\n", A, "-", C, "-", B, "\n")
    elif B > A > C:
        print("\n", B, "-", A, "-", C, "\n")
    elif B > C > A:
        print("\n", B, "-", C, "-", A, "\n")
    elif C > A > B:
        print("\n", C, "-", A, "-", B, "\n")
    elif C > B > A:
        print("\n", A, "-", B, "-", C, "\n")
elif I == 3:
    if A < B < C:
        print("\n", A, "-", C, "-", B, "\n")
    elif A < C < B:
        print("\n", A, "-", B, "-", C, "\n")
    elif B < C < A:
        print("\n", B, "-", A, "-", C, "\n")