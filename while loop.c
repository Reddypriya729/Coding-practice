#include<stdio.h>
int main()
{
	int N;
	printf("Enter Any Number :");
	scanf("%d",&N);
	int sum=0;
	while(N>=1);
	{
		sum =sum+N%10;
		N =N%10;
	}
	printf("%d",sum);
}
	
