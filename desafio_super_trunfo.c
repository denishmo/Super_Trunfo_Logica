#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Variáveis --------------------------------------------
    float soma;
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    unsigned long int pop1 = 340000000, pop2 = 1411000000;
    float area1 = 9867000, area2 = 9597000;
    float pib1 = 27720000000, pib2 = 18770000000;
    int turis1 = 59, turis2 = 59;
    float pibper1, pibper2;
    float densidadeDemo1, densidadeDemo2;
    float superPoder1, superPoder2;

    densidadeDemo1 = (pop1 / area1);
    pibper1 = (pib1 / pop1);
    superPoder1 = ((float)pop1 + area1 + pib1 + pibper1 + densidadeDemo1 + (float)turis1);

    densidadeDemo2 = (pop2 / area2);
    pibper2 = (pib2 / pop2);
    superPoder2 = ((float)pop2 + area2 + pib2 + pibper2 + densidadeDemo2 + (float)turis2);

    soma = primeiroAtributo + segundoAtributo;

    //Menu interativo------------------------------------------

    printf("Bem-vindo ao Jogo Super Trunfo!\n");
    printf("Escolha um Atributo:\n\n");
    printf("País: Estados Unidos da América\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB Percapita\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Super Poder\n");

    printf("Escolha a comparação:\n");
    scanf("%d", &primeiroAtributo);

    switch(primeiroAtributo)
    {
    case 1:
        printf("Você escolheu o atributo População\n");
        resultado1 = pop1 > pop2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu o atributo Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu o atributo PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu o atributo Pontos Turísticos\n");
        resultado1 = turis1 > turis2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu o atributo PIB Percapita\n");
        resultado1 = pibper1 > pibper2 ? 1 : 0;
        break;

    case 6:
        printf("Você escolheu o atributo Densidade Demográfica\n");
        resultado1 = densidadeDemo1 < densidadeDemo2 ? 1 : 0;
        break;

    case 7:
        printf("Você escolheu o atributo Super Poder\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;

    default:
        printf("Opção Inválida!\n");
        break;

    }

    //Segunda comparação-------------------------------------------------------
    printf("Escolha o segundo atributo\n");
    printf("ATENÇÃO: Escolha um atributo diferente do primeiro!\n");
    printf("País: Estados Unidos da América\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB Percapita\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Super Poder\n");

    printf("Escolha a comparação: \n");
    scanf("%d", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo){
        printf("Você escolheu o mesmo atributo, escolha um atributo diferente");
    } else {
        switch(segundoAtributo)
        {
    case 1:
        printf("Você escolheu o atributo População\n");
        resultado2 = pop1 > pop2 ? 1 : 0;
        break;

    case 2:
        printf("Você escolheu o atributo Área\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;

    case 3:
        printf("Você escolheu o atributo PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

    case 4:
        printf("Você escolheu o atributo Pontos Turísticos\n");
        resultado2 = turis1 > turis2 ? 1 : 0;
        break;

    case 5:
        printf("Você escolheu o atributo PIB Percapita\n");
        resultado2 = pibper1 > pibper2 ? 1 : 0;
        break;

    case 6:
        printf("Você escolheu o atributo Densidade Demográfica\n");
        resultado2 = densidadeDemo1 < densidadeDemo2 ? 1 : 0;
        break;

    case 7:
        printf("Você escolheu o atributo Super Poder\n");
        resultado2 = superPoder1 > superPoder2 ? 1 : 0;
        break;

    default:
        printf("Opção Inválida!\n");
        break;
        }
    }

    //A lógica-------------------------------------------------------
    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
        printf("Estados Unidos da América / China\n");
        printf("Soma dos 2 atributos: %d + %d = %f\n", primeiroAtributo, segundoAtributo, soma);
        printf("%d / %d"), primeiroAtributo, segundoAtributo;
    } else if (resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("Você perdeu");
    }

    return 0;
    

}