#include<stdio.h>
#include<math.h>
int main() {
	int Num;
	int sum = 0;
	printf("Input number : ");
	scanf("%d",&Num);
	for (int i = 0; i < Num ; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	if (sum%2 == 0)
	{
		printf("%d is even number",sum);
	}
	else
	{
		printf("%d is odd number",sum);
	}

	

	
}