
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
   int num_filhos;
   float sal_bruto;

    // ENTRADA
   printf("=== CALCULADORA IRPF  ===/n");
   printf("Digite o salário bruto(Válido somente números postivos):/n");
   scanf("%f", &sal_bruto);
   printf("Digite o n° de dependentes(Válido somente números postivos):/n");
   scanf("%d", &num_filhos);
    // PROCESSAMENTO
    
    return 0;
}
