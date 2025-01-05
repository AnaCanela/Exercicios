/*24. Faça um programa que receba uma hora formada por hora e minutos (um número real), calcule e mostre a hora digitada apenas em minutos. Lembre-se de que:
 - para quatro e meia, deve-se digitar 4.30;
 - os minutos vão de 0 a 59.*/

import java.util.Scanner;

public class Exercicio24 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite a hora: ");
        double hora = scan.nextDouble();

        double h = Math.floor(hora);
        double m = hora - h;
        double conversao = h * 60 + m * 100;

        System.out.printf("\nA hora convertida é igual a %.0f minutos.\n", conversao);

        scan.close();
    }
    
}
