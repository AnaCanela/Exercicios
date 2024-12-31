/*12. Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.*/

import java.util.Scanner;

public class Exercicio12 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        double pot1 = 0, pot2 = 0;

        System.out.print("Digite dois números a e b maiores que zero: ");
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        
        pot1 = Math.pow(a, b);
        pot2 = Math.pow(b, a);

        System.out.print("\na elevado a b: " + pot1);
        System.out.print("\nb elevado a a: " + pot2);
        System.out.print("\n");


        scan.close();
    }
    
}
