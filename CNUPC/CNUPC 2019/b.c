#include <stdio.h>
#include <math.h>
int main() {
	int i;
	int j;
	
	int n;
	int curk;
	int var[100001] = {};
	double avg = 0;
	int sum = 0;
	
	scanf("%d",&n);
	n = pow(n,2);
		
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d",&curk);
		avg += curk;
		for(j = 1 ; j <= curk ; j++)
		{
			var[j]++;
		}
	}
	
	avg = avg / 2.0;
	
	for(i = 0 ; ; i++)
	{
		sum += var[i];
		if((double)sum >= avg)
		{
			printf("%d",i);
			return 0;
		}
		
	}
	
	return 0;
}
