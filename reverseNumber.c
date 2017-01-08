#include<stdio.h>
#include<conio.h>
	int main()
	{
		int a,i=1;
		
		printf("Enter the number : ");
		scanf("%d",&a);
		
		while(a>=i)
		{
			printf("%d\t",a);
			a--;
		}
		
		return 0;
		
	}