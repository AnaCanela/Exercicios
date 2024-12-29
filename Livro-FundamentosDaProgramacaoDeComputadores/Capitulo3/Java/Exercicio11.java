/*11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
    a) o numero digitado ao quadrado;
    b) o numero digitado ao cubo;
    c) a raiz quadrada do numero digitado;
    d) a raiz cúbica do numero digitado.*/

import java.util.Scanner;

public class Exercicio11 {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Digite um número positivo maior que zero: ");
        double numero = scan.nextDouble();

        double quadrado = numero * numero;
        double cubo = quadrado * numero;
        double raizQ = Math.sqrt(numero);
        double raizC = Math.cbrt(numero);

        System.out.printf("%na) Quadrado: %.1f", quadrado);
        System.out.printf("%nb) Cubo: %.1f", cubo);
        System.out.printf("%nc) Raiz quadrada: %.1f", raizQ);
        System.out.printf("%nd) Raiz cúbica: %.1f%n", raizC);

    }
    
}
