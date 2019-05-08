#include <stdio.h>

# define SWAP(x, y, temp) ((temp)=(x), (x)=(y), (y)=(temp))

void bubbleSort(int list[], int n){
	int i;
	int j;
	int temp;

	for(i = n - 1 ; i > 0 ; i--)
	{
  		for(j = 0 ; j < i ; j++)
		{
			if(list[j] < list[j+1])
			{
        		temp = list[j];
        		list[j] = list[j+1];
        		list[j+1] = temp;
      		}
    	}
  	}
}

int main() {
	int i;
	int j;
	int n;
	int m;
	int big;
	int cardTable[101][101] = {};
	int pointSum[101] = {};
	
	scanf("%d %d",&n,&m);
	
	for(i = 0; i < n ; i++)
	{
		for(j = 0 ; j < m ; j++)
		{
			scanf("%d",&cardTable[i][j]);
		}
		bubbleSort(cardTable[i],m);
	}
	
	for(i = 0 ; i < m ; i++)
	{
		big = 0;
		for(j = 0 ; j < n ; j++)
		{
			if(cardTable[j][i] >= cardTable[big][i])
				big = j;
		}
		for(j = 0 ; j <= big ; j++)
		{
			if(cardTable[j][i] == cardTable[big][i])
			{
				pointSum[j]++; 
			}
		}
	}
	
	big = 0;
	for(i = 0 ; i < n ; i++)
	{
		if(pointSum[big] <= pointSum[i])
			big = i;
	}
	for(i = 0 ; i <= big ; i ++)
	{
		if(pointSum[i] == pointSum[big])
			printf("%d ",i+1);
	}
	
	return 0;
}
