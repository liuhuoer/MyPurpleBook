#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			int n=i*1100+j*11;
			int m=floor(sqrt(n)+0.5);
			if(m*m==n)printf("%d\n",n);
		}

	}

	return 0;
}
