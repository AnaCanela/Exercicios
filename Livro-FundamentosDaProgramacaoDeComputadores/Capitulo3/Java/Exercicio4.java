/*4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.*/

import java.util.Scanner;

public class Exercicio4 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o salário: ");
        double salario = scan.nextDouble();

        double aumento = salario * 25 / 100;
        double novoSalario = salario + aumento;

        System.out.printf("%nO novo salário é %.1f, com aumento de 25%%.%n", novoSalario);

        scan.close();
    }
}
