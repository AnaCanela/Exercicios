/*3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.*/

import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite a primeira nota e seu peso, respectivamente: ");
        double nota1 = scan.nextDouble();
        int peso1 = scan.nextInt();
        System.out.print("Digite a segunda nota e seu peso: ");
        double nota2 = scan.nextDouble();
        int peso2 = scan.nextInt();
        System.out.print("Digite a terceira nota e seu peso: ");
        double nota3 = scan.nextDouble();
        int peso3 = scan.nextInt();

        double mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

        System.out.printf("\nA media ponderada é %.1f.%n", mediaPonderada);

        scan.close();
    }
}
