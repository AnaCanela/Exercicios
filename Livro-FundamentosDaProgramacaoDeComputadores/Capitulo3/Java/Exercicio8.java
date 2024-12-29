/*8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/

import java.util.Scanner;

public class Exercicio8 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o valor do depósito: ");
        double deposito = scan.nextDouble();

        System.out.print("Digite o valor da taxa de juros: ");
        double taxa = scan.nextDouble();

        double rendimento = deposito * taxa / 100;
        double montante =  deposito + rendimento;

        System.out.printf("%nRendimento: %.1f", rendimento);
        System.out.printf("%nMontante: %.1f%n", montante);

        scan.close();
    }
    
}
