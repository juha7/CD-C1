#include<stdio.h>

int main()
{
	int i;
	int n;
	int g = 0;
	
	scanf("%d",&n);
	
	for(i = 1; i<=n; i++)
	{
	if(i % 3 == 0){
		printf("%d\n", i);
	g++;
	}
}
    printf("�׷��� %d���Դϴ�", g );
}
