#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,c=0,t=0,m=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[a[i]%n]=a[a[i]%n]+n;
	}
	t=a[0];
	for(i=0;i<n;i++)
	{
		if(t<a[i])
		{
			t=a[i] ;
			m=i;
		}
	}
	printf("%d",m);
	getch();
	return 0;

}
