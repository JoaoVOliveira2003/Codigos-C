
#include <stdio.h>
#include <locale.h>
//esse codigo foi feito com as medidas em cm.
void main()
{
  setlocale(LC_ALL, "Portuguese");


  float areatotal,arealado,areatotallados,altura,areabase,arebase,aresta;
  aresta = 29;


  printf("Insira a altura da pirâmide em cm: ");
  scanf("%f", &altura);


  arealado = (aresta * altura) / 2;
  areabase = aresta * aresta;
  areatotallados = arealado * 4;
  areatotal = areabase + areatotallados;


  printf("Área da base: %.2f cm²\n", areabase);
  printf("Área de um lado: %.2f cm²\n", arealado);
  printf("Área total das 4 faces laterais: %.2f cm²\n", areatotallados);
  printf("Área total da pirâmide: %.2f cm²\n", areatotal);


  return 0;
}














