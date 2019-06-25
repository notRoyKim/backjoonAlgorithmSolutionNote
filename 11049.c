#include <stdio.h>
#include <stdlib.h>

int matrix[501] = {};
int dp[502][502] = {};

int min(int a, int b)
{
	return (a < b) ? a : b; 
}

int main(int argc, char *argv[]) {
	int N; // 행렬 수 
	int i;
	int j;
	int m;
	int k;
	
	scanf("%d",&N);
	
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d %d",&matrix[i],&matrix[i+1]);
	}
	
	for(i = 1 ; i < N ; i++)
	{
		for(j = 1 ; j <= N - i ; j++)
		{
			m = j + i;
			dp[j][m] = 2100000000;
			
			for(k = j ; k < m ; k++)
			{
				dp[j][m] = min(dp[j][m], dp[j][k] + dp[k+1][m] + matrix[j -1] * matrix[k] * matrix[m]);
			}
		}
	}


	printf("%d\n",dp[1][N]);
	return 0;
}
