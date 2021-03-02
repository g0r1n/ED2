
/*****************************************
   Enunciado: Calculadora IRPF
   Autor: Wilson da Silva Goltara
   Histórico de versões:
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
   float sal_bruto, aliq, aliq_efe;

    // ENTRADA
   printf("=== CALCULADORA IRPF  ===/n");
   printf("Digite o salário bruto(Válido somente números postivos):/n");
   scanf("%f", &sal_bruto);
   printf("Digite o n° de dependentes(Válido somente números postivos):/n");
   scanf("%d", &num_filhos);

    // PROCESSAMENTO
    if (sal_bruto>=2000){
        printf("Você está insento do IPRF./n");
    }else{
        if (sal_bruto>2000 && sal_bruto<=2900){
            aliq = (sal_bruto*0.075) - (142,80 * num_filhos);
            faixa = 2;
        }else{
            if (sal_bruto>2900 && sal_bruto<=3800){
                aliq = (sal_bruto*0.15) - (354,80*sal_bruto);
                faixa = 3;
        }else{
            if (sal_bruto>3800 && sal_bruto<=4700){
                aliq = (sal_bruto*0.225) - (636,13*sal_bruto);
                faixa = 4;
        }else{
            if (sal_bruto>4700){
                aliq = (sal_bruto*0.275) - (869,36*sal_bruto);
                faixa = 5;
                }}}}

    printf("Seu salário bruto eh: %.2f reais", sal_bruto);
    printf("Voce está na FAIXA %d", faixa);
    printf("Voce possui %d dependentes", num_filhos);
    printf("O valor de IRPF que deve ser pago eh: %.2f reias", aliq);
    printf("Sendo assim, sua alíquota efetiva eh: %.2f %", aliq_efe);

    return 0;
}
