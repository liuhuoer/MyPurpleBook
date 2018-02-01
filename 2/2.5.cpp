//对2.4的改进，应对乘法溢出
#include<stdio.h>
int main(){
	int n2;
	scanf("%d",&n2);
	long long n = n2;
	int count = 0;
	while(n>1)
	{
		if(n%2!=0)n=3*n+1;
		else	n/=2;
		//printf("%lld\n",n);
		count++;
	}
	printf("%d\n",count);
}
