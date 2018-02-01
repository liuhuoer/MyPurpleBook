//P24
#include<stdio.h>
int main()
{
	double sum = 0;			//注意1：在声明变量后对其赋初值
	int i = 0;
	double k = 1.0;
	while(k>1e-6)
	{
		k = 1/(2*i+1);		//注意2：因为k为doulbe型，故应该保证其小数点后仍有值
		if(0 == i%2)
			sum += k;
		else
			sum -= k;
		i++;
	}
	printf("%.6f\n", sum);
	return 0;
}
