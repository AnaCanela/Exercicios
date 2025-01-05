/*22. Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%.*/

import java.util.Scanner;

public class Exercicio22 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o salário mínimo: ");
        double salario = scan.nextDouble();

        System.out.print("Digite a quantidade de quilowatts consumida: ");
        double consumido = scan.nextDouble();

        double valorKW = salario / 5;
        double valorReais = valorKW / consumido;
        double desconto = valorReais * 15 / 100;
        double valorDesc = valorReais - desconto;

        System.out.printf("\nValor do quilowatt: %.2f", valorKW);
        System.out.printf("\nValor a ser pago: %.2f", valorReais);
        System.out.printf("\nValor com desconto: %.2f\n", valorDesc);

        scan.close();
    }
    
}
