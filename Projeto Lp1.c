#include <stdio.h>
#include <stdlib.h> //biblioteca para nao precisar solicitar returno no final do programa;
int main(){

float tarifa, // variável para a tarifa;
QH, // Qunaitade de horas por dia;
P, // potencia em watts;
P1, // potencia em KWH (após dividir watts por mil);
consumo, // calculo do consumo apartir da formula;
consu_tarifa, // consumo multiplicado pela tarifa, com fins de encontrar o valor gasto em reais
consu_tot, // variavel para acumular o consumo dos aparelhos
total, // valor total, nele estará incluso todos os impostos
ICMS = 0.27,
PIS = 0.0165,
COFINS = 0.0761,
impostos;

int gel, // variavel para a geladeira
setor, // variavel para o setor no laço while
ar, // variavel para o ar condicionado
compu, // variavel para o computador
tele, // variavel para a televisão
lam, // variavel para a lampada
QDM, // variavel para a quantidade de dias de consumo no mes
QA; // variavel para a quantidade de aparelhos
impostos = ICMS+PIS+COFINS;
printf("Seja bem-vindo ao programa para calcular o valor da sua conta de energia \n");
printf("Por favor, ensira o valor pago por KWH da sua energia. \n");
scanf("%f", &tarifa);
setor = 1; // indicando que ja existe 1(um) setor
while (setor == 1) // enquanto esse setor for igual a 1, o programa continuará perguntando sobre itens dos setores
        {
         printf("Tem geladeira?\n[1] para Sim e [0] para Nao\n");
         scanf("%i", &gel);
            if (gel==1){ // se a resposta seja [1] ele solicitara mais informacoes a respeito do aparelho
                printf("Qual a quantidade de aparelhos?\n");
                scanf("%d", &QA);
                printf("Horas de consumo por dia?\n");
                scanf("%f", &QH);
                printf("Dias de consumo por mes?\n");
                scanf("%d", &QDM);
                printf("Qual a potencia(Watt)?\n");
                scanf("%f", &P1);
                P = P1/1000; //como o valor informado é em watts, para converter para KWh, divide por 1000(mil)
                consumo = ((QH*QDM)*P)*QA;
                consu_tot = consu_tot+consumo;} //acumulando o consumo
        printf("Tem ar condicionado?\n[1] para Sim e [0] para Nao\n");
        scanf("%i", &ar);
            if (ar==1){ // se a resposta seja [1] ele solicitara mais informacoes a respeito do aparelho
                    printf("Qual a quantidade?\n");
                    scanf("%d", &QA);
                    printf("Horas de consumo por dia?\n");
                    scanf("%f", &QH);
                    printf("Dias de consumo por mes?\n");
                    scanf("%d", &QDM);
                    printf("Qual a potencia(Watt)?\n");
                    scanf("%f", &P1);
                    P = P1/1000; //como o valor informado é em watts, para converter para KWh, divide por 1000(mil)
                    consumo = ((QH*QDM)*P)*QA;
                    consu_tot = consu_tot+consumo;} //acumulando o consumo
        printf("Tem Computador?\n[1] para sim e [0] para nao\n");
        scanf("%i", &compu);
            if (compu== 1){ // se a resposta seja [1] ele solicitara mais informacoes a respeito do aparelho
                    printf("Qual a quantidade?\n");
                    scanf("%d", &QA);
                    printf("Horas de consumo por dia?\n");
                    scanf("%f", &QH);
                    printf("Dias de consumo por mes?\n");
                    scanf("%d", &QDM);
                    printf("Qual a potencia(Watt)?\n");
                    scanf("%f", &P1);
                    P = P1/1000; //como o valor informado é em watts, para converter para KWh, divide por 1000(mil)
                    consumo = ((QH*QDM)*P)*QA;
                    consu_tot = consu_tot+consumo;} //acumulando o consumo
        printf("Tem Lampada?\n[1] para sim e [0] para nao\n");
        scanf("%i", &lam);
            if (lam==1){ // se a resposta seja [1] ele solicitara mais informacoes a respeito do aparelho
                    printf("Qual a quantidade?\n");
                    scanf("%d", &QA);
                    printf("Horas de consumo por dia?\n");
                    scanf("%f", &QH);
                    printf("Dias de consumo por mes?\n");
                    scanf("%d", &QDM);
                    printf("Qual a potencia(Watts)?\n");
                    scanf("%f", &P1);
                    P = P1/1000; //como o valor informado é em watts, para converter para KWh, divide por 1000(mil)
                    consumo = ((QH*QDM)*P)*QA;
                    consu_tot = consu_tot+consumo;} //acumulando o consumo
            printf("Tem Televisao?\n[1] para sim e [0] para nao\n");
            scanf("%i", &tele);
                if (tele==1){ // se a resposta seja [1] ele solicitara mais informacoes a respeito do aparelho
                    printf("Qual a quantidade?\n");
                    scanf("%d", &QA);
                    printf("Horas de consumo por dia?\n");
                    scanf("%f", &QH);
                    printf("Dias de consumo por mes?\n");
                    scanf("%d", &QDM);
                    printf("Qual a potencia(Watt)?\n");
                    scanf("%f", &P1);
                    P = P1/1000; //como o valor informado é em watts, para converter para KWh, divide por 1000(mil)
                    consumo = ((QH*QDM)*P)*QA;
                    consu_tot = consu_tot+consumo;} //acumulando o consumo
            printf("Deseja somar um novo setor?[1] para sim e [0] para nao \n");
            scanf("%i", &setor);
            // enquanto a resposta for sim[1] o programa adicionará mais um setor, caso seja nao[0] ele informará o resultado dos gastos
        }
            consu_tarifa = consu_tot*tarifa; // calculo em reais baseado na tarifa solicitada no inicio do programa e o acumulo de KWh
            printf("O consumo sem impostos foi de: %3.3f\n",consu_tot);
            total = ((consu_tarifa*impostos)+consu_tarifa); //juntanto todos os importos teremos 36,26%, que em decimais fica: 0,3626 e multiplica-se pelo consumo total a fins de encontrar o valor em impostos.
            printf("Com a tributaçao dos impostos: ICMS (27%), o PIS (1.65%), e o COFINS (7,61%).\n");
            printf("________________________________________________________\n");

            printf("O total a ser pago, incluindo os impostos sera: %4.2f reais\n", total); //apos encontrar o valor em impostos e somar com o consumo em reais, encontraremos o valor total reajustado com os importos.

}








