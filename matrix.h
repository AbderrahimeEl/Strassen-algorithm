#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
void add(int n, long long A[][n], long long B[][n], long long C[][n]);
void subtract(int n, long long A[][n], long long B[][n], long long C[][n]);
void strassen(int n, long long A[][n], long long B[][n], long long C[][n]);
void printMatrix(int n, long long mat[][n]);
void generateRandomSquareMatrix(int n, long long A[][n]);
void multiplyMatrices(int N, long long A[][N], long long B[][N], long long result[][N]);