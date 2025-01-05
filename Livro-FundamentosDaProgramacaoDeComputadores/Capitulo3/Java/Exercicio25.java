/*25. Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado.*/

import java.util.Scanner;

public class Exercicio25 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite os custos do espetáculo: ");
        double custo = scan.nextDouble();
        System.out.print("Digite o preço do ingresso: ");
        double ingresso = scan.nextDouble();

        double quantidade = custo / ingresso;

        System.out.printf("\nA Quantidade mínima de ingressos vendidas deve ser de %.0f.\n", quantidade);

        scan.close();
    }
    
}
