#include<stdio.h>

int main()
{
	int big;
	int small;
	scanf("%d %d", &big, &small);
	
	if(big % small == 0)
	{
	printf("��������\n");
			
	}
	else if(small % big == 0)
	{
	printf("�������� \n");
		
	}	
	else
	{
	printf("��������X\n");
		
	}
}
