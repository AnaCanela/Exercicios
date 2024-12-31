/*13. Sabe-se que:
    pé = 12 polegadas
    1 jarda = 3 pés
    1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
    a) polegadas;
    b) jardas;
    c) milhas.*/

import java.util.Scanner;

public class Exercicio13 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Entre com a distância em pés: ");
        double pes = scan.nextDouble();

        double polegadas = pes * 12;
        double jardas = pes / 3;
        double milha = jardas / 1760;

        System.out.print("\nPolegadas: " + polegadas);
        System.out.print("\nJardas: " + jardas);
        System.out.print("\nMilhas: " + milha);
        System.out.print("\n");

        scan.close();
    }
    
}
