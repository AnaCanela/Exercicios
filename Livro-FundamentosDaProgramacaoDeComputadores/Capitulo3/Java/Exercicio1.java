/*1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.*/

import java.util.Scanner;

public class Exercicio1 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite quatro numeros: ");
        int num1 = scan.nextInt();
        int num2 = scan.nextInt();
        int num3 = scan.nextInt();
        int num4 = scan.nextInt();

        int soma = num1 + num2 + num3 + num4;

        System.out.println("A soma dos quatro numeros é " + soma);

        scan.close();
    }
}