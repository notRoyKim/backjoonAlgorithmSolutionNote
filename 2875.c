#include <stdio.h>
#include <stdlib.h>


int max(int a, int b)
{
	return (a > b) ? a : b;
}
int main(int argc, char *argv[]) {
	int w;
	int m;
	int k;
	int l;
	int i;
	int tempw;
	int tempm;
	int temp;
	int retval = 0;
	
	scanf("%d %d %d",&w, &m, &k);
	
	for(i = 0; i <= k; i++)
	{
		l = k - i;
		
		tempw = w - i;
		tempm = m - l;
		
		if(tempw >= 2 * tempm)
			temp = tempm;
		else
			temp = tempw/2;
			
		retval = max(retval, temp);
	}
	
	
	printf("%d\n",retval);
	return 0;
}
