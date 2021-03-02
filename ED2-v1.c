
/*****************************************
   Enunciado: Calculadora IRPF
   Autor: Wilson da Silva Goltara
   Histórico de versões: Version 1.0
*****************************************/

/* Importações de Bibliotecas */
#include <stdio.h>

/* Declaração de constantes */

/* Declaração de estruturas
   Nome: Calculadora IRPF
   Objetivo: Tem como objetivo informar ao usuário, a faixa e alíquota que o mesmo se encaixa, o valor a ser pago
   e qual a alíquota efetiva. */

/* Funçõe principal */
int main() {
    /* Declarações de variáveis */
   int num_filhos, faixa;
   float sal_bruto, valor_pagar,aliq, aliq_efe, desc;

    // ENTRADA                                                              /* Na parte da entrada eu fiz a aprensentação da calculadora e recolhi
   printf("=== CALCULADORA IRPF  ===\n");                                   /*os dados armazenando em suas devidas variáveis.*/
   printf("Digite o salário bruto(Válido somente números postivos):\n");
   scanf("%f", &sal_bruto);
   printf("Digite o n° de dependentes(Válido somente números postivos):\n");
   scanf("%d", &num_filhos);

    // PROCESSAMETO                                                         /* No primeiro momento, verifico se os número de filhos são maiores
    if (num_filhos < 0 && sal_bruto < 0){                                   /* do que 0 e se o maxmimo de desconto foi atingido.*/
        printf("números negativos não são possveis!!  ERRO!!");
    }
    desc = num_filhos*200;

    if (desc > 1000){
        desc = 1000;
    }
                                                                            /*No segundo momento verifo qual faixa o cliente se encaixa, armazenando e imprimindo no final*/
    if (sal_bruto<=2000){                                                   /*o valor a ser pago, a faixa, a alíquota efetiva, dependentes, e o sálario bruto*/
        printf("Você está insento do IPRF.\n");
    }else{
        if (sal_bruto>2000 && sal_bruto<=2900){
            valor_pagar = (sal_bruto*0.075) - 142.80 - desc;
            aliq_efe = (valor_pagar/sal_bruto)*100;
            faixa = 2;
            aliq = 7.5;
        }else{
            if (sal_bruto>2900 && sal_bruto<=3800){
                valor_pagar = (sal_bruto*0.075) - 142.80 - desc;
                aliq_efe = (valor_pagar/sal_bruto)*100;
                faixa = 3;
                aliq = 15;
        }else{
            if (sal_bruto>3800 && sal_bruto<=4700){
                valor_pagar = (sal_bruto*0.225) - 636.13 - desc;
                aliq_efe = (valor_pagar/sal_bruto)*100;
                faixa = 4;
                aliq = 22.5;
        }else{
            if (sal_bruto>4700){
                valor_pagar = (sal_bruto*0.275) - 869.36 - desc;
                aliq_efe = (valor_pagar/sal_bruto)*100;
                faixa = 5;
                aliq = 27.5;
                }}}}}

    if (valor_pagar > 0){                                               /*Aqui eu verifico se o valor a ser pago sera positivo e mostro as informações*/
        printf("Seu salário bruto eh: %.2f reais\n", sal_bruto);        /*finais, com o salario bruto, numeros de filhos,valor a ser pago, */
        printf("Voce está na FAIXA %d, com a alíquota de %d %n", &faixa, aliq);
        printf("Voce possui %d dependentes\n", num_filhos);
        printf("O valor de IRPF que deve ser pago eh: %.2f reias\n", valor_pagar);
        printf("Sendo assim, sua alíquota efetiva eh: %.2f %\n", aliq_efe);
    }else{
        valor_pagar = 0;
        aliq_efe = 0;
        printf("Seu salário bruto eh: %.2f reais\n", sal_bruto);
        printf("Voce está na FAIXA %d com a alíquota de %d %n", &faixa, aliq);
        printf("Voce possui %d dependentes\n", num_filhos);
        printf("O valor de IRPF que deve ser pago eh: %.2f reias\n", valor_pagar);
        printf("Sendo assim, sua alíquota efetiva eh: %.2f %\n", aliq_efe);
    }
    return 0;
}
