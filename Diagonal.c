#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese los valores de la matriz [%d] [%d]: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
     

    return 0;
}
