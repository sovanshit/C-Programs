#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
printf("without using 3rd varriables");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	scanf("a=%d,b=%d",a,b);
	return(0);
}
