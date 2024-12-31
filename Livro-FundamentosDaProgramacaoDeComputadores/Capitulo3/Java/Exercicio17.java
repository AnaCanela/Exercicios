/*17. Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.*/

import java.util.Scanner;

public class Exercicio17 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite o salário: ");
        double salario = scan.nextDouble();

        System.out.print("Digite o valor do primeiro cheque: ");
        double cheque1 = scan.nextDouble();

        System.out.print("Digite o valor do segundo cheque: ");
        double cheque2 = scan.nextDouble();

        double cpmf1 = cheque1 * 0.38 / 100;
        double cpmf2 = cheque2 * 0.38 / 100;
        double saldo = salario - cpmf1 - cpmf2;

        System.out.printf("O saldo da conta é %.2f.", saldo);

        scan.close();
    }
    
}
