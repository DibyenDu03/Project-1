#include<stdio.h>

int main()
{
	int a[100],max,m,i,n,diff=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=-1;
	max=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(a[i]>max)
			max=a[i];
		else
		{
			diff=max-a[i];
			if(diff>m)
			{
				m=diff;
			}
		}
	}
	printf("%d\n",m);
	return 0;
}