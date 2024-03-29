

void main ()
{
    int a[5][6];
    int aux,linha,coluna;


    //mostrar a matriz
    for(linha=0;linha<5;linha++){
        for (coluna=0;coluna<6;coluna++)
            {
            a[linha][coluna]=linha;
            }
    }
    //mostrar na tela a matriz
    for(linha=0;linha<5;linha++){
        for (coluna=0;coluna<6;coluna++)
            {
             printf("\t %d",a[linha][coluna]);
            }
            printf("%\n");
    }


}





