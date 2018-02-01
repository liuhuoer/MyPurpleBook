#include<stdio.h>
int main()
{
	int n;
	for(int x = 1; ; x++)
	{
		n = x*x;
		if(n<1000)continue;
		if(n>9999)break;
		int t1 = n/100;
		int t2 = n%100;
		if(t1/10 == t1%10 && t2/10 ==t2%10)printf("%d\n",n);
	}
	return 0;
}
