/*6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.*/

import java.util.Scanner;

public class Exercicio6 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o salário: ");
        double salarioBase = scan.nextDouble();

        double gratificacao = salarioBase * 5 / 100;
        double imposto = salarioBase * 7 / 100;
        double salario = salarioBase + gratificacao - imposto;

        System.out.printf("\nO salário a receber é de %.1f.%n", salario);

        scan.close();
    }
}
