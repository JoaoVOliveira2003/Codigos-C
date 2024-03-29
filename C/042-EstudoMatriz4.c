void main ()
{
    int a[5][5];
    int aux,linha,coluna;
    aux=4;
    //mostrar a matriz
    for(linha=0;linha<5;linha++){
        for (coluna=0;coluna<5;coluna++)
            {
            if(aux==coluna){
                a[linha][coluna]=1;
                aux--;


            }
            else{
                a[linha][coluna]=0;
            }


            }
    }
    //mostrar na tela a matriz
    for(linha=0;linha<5;linha++){
        for (coluna=0;coluna<5;coluna++)
            {
             printf("\t %d",a[linha][coluna]);
            }
            printf("%\n");
    }
}

