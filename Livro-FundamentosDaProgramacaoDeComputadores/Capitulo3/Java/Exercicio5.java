/*5. Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.*/

import java.util.Scanner;

public class Exercicio5 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o valor do salário: ");
        double salario = scan.nextDouble();
        
        System.out.print("Digite o percentual de aumento: ");
        double percentual = scan.nextDouble();

        double aumento = salario * percentual / 100;
        double novoSalario = salario + aumento;

        System.out.printf("%nAumento: %.1f.", aumento);
        System.out.printf("%nNovo salário: %.1f.%n", novoSalario);

        scan.close();
    }
}
