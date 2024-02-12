#include "matrix.h"
int main()
{
    int n;
    printf("Enter the size of the matrices: ");
    scanf("%d", &n);
    long long(*A)[n] = malloc(sizeof(long long[n][n]));
    long long(*B)[n] = malloc(sizeof(long long[n][n]));
    long long(*C)[n] = malloc(sizeof(long long[n][n]));
    long long(*R)[n] = malloc(sizeof(long long[n][n]));
    generateRandomSquareMatrix(n, A);
    generateRandomSquareMatrix(n, B);
    printf("\n\t first matrix :\n");
    printMatrix(n,A);
    printf("\n\t second matrix :\n");
    printMatrix(n,B);
    strassen(n, A, B, C);
    printf("\n\t result :\n");
    printMatrix(n,C);
    free(A);
    free(B);
    free(C);
    free(R);
    return 0;
    return 0;
}
