void prod_matriz(int M1[][10],int M2[][10],int n)//matrices cuadradas...
{
    int matriz3[10][10];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            matriz3[i][j]=0; 
            for (int k=0;k<n;k++){
                matriz3[i][j] += M1[i][k]*M2[k][j];
            }
        }
    }
}
