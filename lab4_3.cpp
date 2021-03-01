#include <stdio.h>
int main()
{
	char a[100],b;
	int i;
	gets(a);
	while(a[i]!='\0')
	{
		b = a[i];
		printf("%c",a[i]);
		while(a[i]==b)
			i++;
	}
	return 0;
}
