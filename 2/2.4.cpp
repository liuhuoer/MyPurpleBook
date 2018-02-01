#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int count = 0;
	while(n>1)
	{
		if(n%2!=0)n=3*n+1;
		else	n/=2;
		printf("%d\n",n);
		count++;
	}
	printf("%d\n",count);
}
