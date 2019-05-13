#include <stdio.h>
#include <math.h>

long long custompow(int i, int j)
{
	int n;
	long long re = 1;
	for(n = 0; n < j ; n++)
	{
		re = re * (long long)i;
	}
	return re;
}

int main() {
	long long a;
	long long tp;
	int i;
	
	scanf("%lld",&a);
	
	if(a == 0)
	{
		printf("NO");
		return 0;
	}
	
	for(i = 39 ; i >= 0 ; i--)
	{
		tp = custompow(3,i);
		if(a - tp >= 0)
		{
			a = a-tp;
			if(a == 0)
			{
				printf("YES");
				return 0;
			}
		}
	}
	
	printf("NO");
	return 0;
}
