
#include <stdio.h>
#include <locale.h>
//esse codigo foi feito com as medidas em cm.
void main()
{
  setlocale(LC_ALL, "Portuguese");


  float areatotal,arealado,areatotallados,altura,areabase,arebase,aresta;
  aresta = 29;


  printf("Insira a altura da pir�mide em cm: ");
  scanf("%f", &altura);


  arealado = (aresta * altura) / 2;
  areabase = aresta * aresta;
  areatotallados = arealado * 4;
  areatotal = areabase + areatotallados;


  printf("�rea da base: %.2f cm�\n", areabase);
  printf("�rea de um lado: %.2f cm�\n", arealado);
  printf("�rea total das 4 faces laterais: %.2f cm�\n", areatotallados);
  printf("�rea total da pir�mide: %.2f cm�\n", areatotal);


  return 0;
}














