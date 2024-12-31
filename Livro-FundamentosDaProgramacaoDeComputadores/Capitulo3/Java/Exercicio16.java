/*16. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo, calcule e mostre o salário a receber, seguindo estas regras:
    a) a hora trabalhada vale a metade do salário mínimo.
    b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
    c) o imposto equivale a 3% do salário bruto.
    d) o salário a receber equivale ao salário bruto menos o imposto.*/

import java.util.Scanner;

public class Exercicio16 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite a quantidade de horas trabalhadas: ");
        double horasTrab = scan.nextDouble();

        System.out.print("Digite o valor do salário mínimo: ");
        double salMin = scan.nextDouble();

        double vlrHoraTrab = salMin / 2;
        double salBruto = vlrHoraTrab * horasTrab;
        double imposto = salBruto * 3 / 100;
        double salLiq = salBruto - imposto;

        System.out.printf("\nO salario a receber é %.2f.", salLiq);
        System.out.print("\n");

        scan.close();
    }
    
}
