#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i,j,k,n,b,f;
	printf("Enter the n value\n");
	scanf("%d",&n);
	if(n>0)
	{
		for(i=0;i<n;i++)
		{
			b=a[0];
			for(j=0;j<4;j++)
			{
				a[j]=a[j+1];
			}
			a[4]=b;
		}
		for(k=0;k<5;k++)
		{
			printf("%d",a[k]);
		}
	}
	else if(n<0)
	{
		f=-(n);
		for(i=f;i>0;i--)
		{
			b=a[4];
			for(j=3;j>=0;j--)
			{
				a[j+1]=a[j];
			}
			a[0]=b;
		}
		for(k=0;k<5;k++)
		{
			printf("%d",a[k]);
		}
	}
	return 0;
}


