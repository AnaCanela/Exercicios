/*14. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) a idade dessa pessoa;
    b) quantos anos ela terá em 2050.*/

import java.util.Scanner;

public class Exercicio14 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o ano de nascimento: ");
        int nascimento = scan.nextInt();

        System.out.print("Digite o ano atual: ");
        int anoAtual = scan.nextInt();

        int idade = anoAtual - nascimento;
        int futuro = 2050 - nascimento;

        System.out.print("\nIdade: " + idade);
        System.out.print("\nIdade em 2050: " + futuro);
        System.out.print("\n");

        scan.close();
    }
    
}
