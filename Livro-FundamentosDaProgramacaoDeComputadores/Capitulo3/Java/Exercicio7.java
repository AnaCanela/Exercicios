/*7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

import java.util.Scanner;

public class Exercicio7 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o salário: ");
        double salarioBase = scan.nextDouble();

        double imposto = salarioBase * 10 / 100;
        double salario = salarioBase + 50 - imposto;

        System.out.printf("&nO salário é %.1f.%n", salario);

        scan.close();
    }
}
