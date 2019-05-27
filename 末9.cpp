#include <stdio.h>
#include <stdlib.h>


#define f(a,b,c)(a+b+c)*(a-b-c)
int main(void)
{
	
	float i,j,k;
	printf("用這個方程式(a+b+c)*(a-b-c)算出你給的值\n");	
printf("請輸入三個數字:");
scanf("%f%f%f",&i,&j,&k);
printf("計算結果為%f\n",f(i,j,k));
system("PAUSE");
return 0;	
}

