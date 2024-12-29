/*10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = PI * R².*/

import java.util.Scanner;

public class Exercicio10 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o valor do raio: ");
        double raio = scan.nextDouble();

        double PI = 3.14;
        double area = PI * raio * raio;

        System.out.printf("%nA área do círculo é %.1f.%n", area);

        scan.close();
    }
}
