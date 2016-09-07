#include<stdio.h>
#include<conio.h>
# define max 100
int main()
{
	int a[max],n,i,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0]^a[1];
	for(i=2;i<n;i++)
	{
		c=c^a[i];
	}
	printf("%d",c);
	getch();
	return 0;
}
