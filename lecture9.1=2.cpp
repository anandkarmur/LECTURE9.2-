#include<stdio.h>

main()
{
	char name[] = "HELLO WORLD";
	int i;
	
	for(i=0;i<11;i++)
	{
		if(name[i]>='A'&& name [i]<='Z')
		{
			printf("%c",name[i]+32);
		}
		else
		{
			printf("%c",name[i]);
		}
	}
}