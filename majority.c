#include<stdio.h>

int main()
{
	int a[100],n,i,x=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	x=0,c=1;
	for(i=0;i<n;i++)
	{
		if(a[x]==a[i])
			c++;
		else
			c--;
		if(c==0)
		{
			x=i;
			c=i;
		}
	}
    if(c!=0)
        printf("%d ",a[x]);
	else
        printf("No Majority");
    return 0;
}