#include<stdio.h>
int sum(int a , int b ,int c)
{
	int ans = 0;
	ans = a + b + c;
	return ans;
}
int main()
{
	int num[4];
	if (scanf_s("%d", &num[0]))
	{
		if (scanf_s("%d", &num[1]))
		{


			if ((scanf_s("%d", &num[2])))
			{
				num[3] = sum(num[0], num[1], num[2]);
				
				
			}
			else
			{
				printf_s("Please In Put Number \n End Program");
				
			}

		}
		else
		{
			printf_s("Please In Put Number \n End Program ");
		}


	}
	else
	{
		printf_s("Please In Put Number \n End Program ");
	}




	return 0;
}