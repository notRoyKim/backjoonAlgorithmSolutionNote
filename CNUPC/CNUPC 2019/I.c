#include <stdio.h>
#include <math.h>

int main() {
	int a;
	int tp;
	int i;
	
	scanf("%d",&a);
	if(a == 0)
	{
		printf("NO");
		return 0;
	}
	
	for(i = 19 ; i >= 0 ; i--)
	{
		tp = pow(3,i);
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
