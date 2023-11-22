#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Declaración de la matriz
    int Matrix[3][3];
    //Ingreso de datos para la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese los valores de la matriz [%d] [%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    
    //Impresión de la matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     
     //Impresión de la diagonal
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
            printf("%d\t", Matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
