#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	for(int i=0;i<num;i++)
	{
		int n,t=0,l,m;
		scanf("%d",&n);
		int a[n],b[n];
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(int j=0;j<n;j++)
		{
			l=a[j];
			m=j+1;
			if((a[j]==j+1)||(a[l-1]==m))
			{
				t=1;
			}
			else 
			{
				t=0;
				break;
			}
		}
		if(t==1)
		{
			printf("inverse\n");
		}
		else
		{
			printf("not inverse\n");
		}
	}
}