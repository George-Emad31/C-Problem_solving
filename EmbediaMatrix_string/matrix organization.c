#include<stdio.h>

int main(){
    int matrix[3][3];
    printf("input number in the matrix row by row \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("matrix is: \n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\t\t     |     |     \n");
        printf("\t\t  %d  |  %d  |  %d  \n", matrix[i][0], matrix[i][1], matrix[i][2]);
        printf("\t\t_____|_____|_____\n");
    }
    return 0;
}