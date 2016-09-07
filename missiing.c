#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[100],n,i,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c+=a[i];
	}
	n=n*(n+1)/2;
	printf("%d",n-c);
	getch();
	return 0;
	
}
