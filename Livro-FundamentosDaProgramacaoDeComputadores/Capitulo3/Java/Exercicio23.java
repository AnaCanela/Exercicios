/*23. Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número.*/

import java.util.Scanner;

public class Exercicio23 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Digite um número real: ");
        double numero = scan.nextDouble();

        double inteira = Math.floor(numero);
        double fracionaria = numero - inteira;
        double arredondada = Math.round(numero);

        System.out.printf("\nParte inteira: %f", inteira);
        System.out.printf("\nParte fracionária: %f", fracionaria);
        System.out.printf("\nParte arredondada: %f\n", arredondada);

        scan.close();
    }
    
}
