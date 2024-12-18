#include <stdio.h>
int main()
{
    int matA[2][3], matB[3][4], matR[2][4];
    int i, j, k;
    printf("Enter elements of the first matrix of order 2 x 3 \n" );
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    
    printf("\n First Matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of the second matrix of order 3 x 4 \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\n Second Matrix is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", matB[i][j]);
        }
        printf("\n");

    }
    
    // Multiplying matrices:
    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        { 
            matR[i][j] = 0;
            for(k=0; k<3; k++)
            {
                matR[i][j] = matR[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }

    printf("\n Matrix multiplication is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t", matR[i][j]);
        }
        printf("\n");
    }
               
}  
