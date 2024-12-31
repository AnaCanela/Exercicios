/*15. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
    a) o valor correspondente ao lucro do distribuidor;
    b) o valor correspondente aos impostos;
    c) o preço final do veículo.*/

import java.util.Scanner;

public class Exercicio15 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o preço de fábrica do veículo: ");
        double precoFab = scan.nextDouble();

        System.out.print("Digite o percentual de lucro: ");
        double percLucro = scan.nextDouble();

        System.out.print("Digite o percentual de impostos: ");
        double percImposto = scan.nextDouble();

        double lucro = precoFab * percLucro / 100;
        double imposto = precoFab * percImposto / 100;
        double precoFinal = precoFab + lucro + imposto;

        System.out.print("\nLucro: " + lucro);
        System.out.print("\nImposto: " + imposto);
        System.out.print("\nValor final: " + precoFinal);
        System.out.print("\n");

        scan.close();
    }
}
