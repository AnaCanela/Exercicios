/*9. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/

import java.util.Scanner;

public class Exercicio9 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o valor da base: ");
        double base = scan.nextDouble();

        System.out.print("Digite o valor da altura: ");
        double altura = scan.nextDouble();

        double area = (base * altura) / 2;

        System.out.printf("%nA área do triângiulo é %.1f.%n", area);

        scan.close();
    }   
}
