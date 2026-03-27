#include<stdio.h>

int main(void)
{
    float a,b,c;
    int d;
    
    printf("\n INSIRA A LARGURA DO TERRENO: ");
    scanf("%f", &a);
    printf("\n INSIRA O COMPRIMENTO DO TERRENO: ");
    scanf("%f", &b);
    printf("\n INSIRA A DISTANCIA ENTRE AS ESTACAS: ");
    scanf("%f", &c);
    printf("\n INSIRA A QUANTIDADE DE FIOS: ");
    scanf("%d", &d);
    
    printf("\n A QUANTIDADE DE ESTACAS NECESSARIAS E: %.2f", ((a*2+b*2)/c));
    printf("\n OS METROS DE ARRAME NECESSARIO E: %.2f", ((a*2+b*2)*d));
}
