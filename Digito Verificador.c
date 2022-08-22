#include <stdio.h>
#include <math.h>
void main()
{
    int digito, unidade, dezena, centena, unidade_de_milhar, dezena_de_milhar, centena_de_milhar, d1, d2, d3, d4, d5, d6, dv, soma;
    printf("Informe um numero de seis digitos: ");
    scanf("%d",&digito);
    d1 = digito * 7;
    d2 = digito * 6;
    d3 = digito * 5;
    d4 = digito * 4;
    d5 = digito * 3;
    d6 = digito * 2;
    unidade = digito % 10;
    digito = digito / 10;
    dezena = digito % 10;
    digito = digito / 10;
    centena = digito % 10;
    digito = digito / 10;
    unidade_de_milhar = digito % 10;
    digito = digito / 10;
    dezena_de_milhar = digito % 10;
    centena_de_milhar = digito / 10;
    soma = unidade + dezena + centena + unidade_de_milhar + dezena_de_milhar + centena_de_milhar;
    dv = soma % 11;
    if(soma != 0||1){
        printf("%d", dv);
    }
    else if(soma == 0||1){
        printf("0");
    }
    }
