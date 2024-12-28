/*2. Faça um programa que receba três notas, calcule e mostre a média aritmética.*/

import java.util.Scanner;

public class Exercicio2 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite a primeira nota: ");
        double nota1 = scan.nextDouble();
        System.out.print("Digite a segunda nota: ");
        double nota2 = scan.nextDouble();
        System.out.print("Digite a terceira nota: ");
        double nota3 = scan.nextDouble();

        double mediaAritmetica = (nota1 + nota2 + nota3) / 3;

        System.out.println("A media aritmética das notas é " + mediaAritmetica);

        scan.close();
    }
}