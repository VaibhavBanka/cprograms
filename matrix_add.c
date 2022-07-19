#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of matrix (n*n):");
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];
    printf("Enter elements for matrix 1:\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Enter row %d column %d:",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter elements for matrix 2\n");
    for (int j=0;j<n;j++){
        for (int k=0;k<n;k++){
            printf("Enter row %d column %d:",j+1,k+1);
            scanf("%d",&mat2[j][k]);
        }
    }
    int mat3[n][n];
    printf("The addition of two matrices is\n");
    for (int j=0;j<n;j++){
        for (int k=0;k<n;k++){
            printf("%d ",mat1[j][k]+mat2[j][k]);
        }
        printf("\n");
    }
}