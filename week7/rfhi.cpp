#include<stdio.h>

int main()
{
	int big;
	int small;
	scanf("%d %d", &big, &small);
	
	if(big % small == 0)
	{
	printf("³ª´©¾îÁü\n");
			
	}
	else if(small % big == 0)
	{
	printf("³ª´©¾îÁü \n");
		
	}	
	else
	{
	printf("³ª´©¾îÁüX\n");
		
	}
}
