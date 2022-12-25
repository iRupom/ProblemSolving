#include <bits/stdc++.h>
using namespace std;
 
#define N 101
#define mod 1000000007
 
void matrixMul(long long resultMatrix[][N], long long A[][N], long long dimention) {
	long long res[N][N];
 
	for (long long i = 0; i < dimention; i++) {
		for (long long j = 0; j < dimention; j++) {
			res[i][j] = 0;
 
			for (long long k = 0; k < dimention; k++) {
				long long x = (resultMatrix[i][k] * A[k][j]) % mod;
				res[i][j] = (res[i][j] + x) % mod;
			}
		}
	}
 
	for (long long i = 0; i < dimention; i++) {
		for (long long j = 0; j < dimention; j++) {
			resultMatrix[i][j] = res[i][j];
		}
	}
}
 
void matrixExpo(long long BaseMatrix[][N], long long dimention, long long power) {
 
	long long Result[N][N];
 
	for (long long i = 0; i < dimention; i++) {
		for (long long j = 0; j < dimention; j++) {
			if (i == j) Result[i][j] = 1;
			else Result[i][j] = 0;
		}
	}
 
	while (power) {
		if (power % 2 == 1) {
			matrixMul(Result, BaseMatrix, dimention);
			power--;
		}
		else {
			matrixMul(BaseMatrix, BaseMatrix, dimention);
			power /= 2;
		}
	}
 
	for (long long i = 0; i < dimention; i++) {
		for (long long j = 0; j < dimention; j++) {
			BaseMatrix[i][j] = Result[i][j];
		}
	}
 
 
}
 
void  printMatrix(long long mat[][N], long long dimension) {
 
	for (long long i = 0; i < dimension; i++) {
		for (long long j = 0; j < dimension; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	long long t;
	cin >> t;
 
	while (t--) {
		long long dimension, power;
		cin >> dimension >> power;
		long long BaseMatrix[N][N];
 
		for (long long i = 0; i < dimension; i++) {
			for (long long j = 0; j < dimension; j++) {
				cin >> BaseMatrix[i][j];
			}
		}
 
		matrixExpo(BaseMatrix, dimension, power);
		printMatrix(BaseMatrix, dimension);
 
		memset(BaseMatrix, 0, sizeof(BaseMatrix));
	}
 
	return 0;
}
