#include<stdio.h>
#include<math.h>
int main()
{
int t ;
unsigned long long int x,k,flag = 1;
scanf("%d",&t);
while(t--)
{
flag = 1;
scanf("%llu%llu",&x,&k);
while(x)
{
if(x%k == 0)
{
x/=k ;
flag = 1;
}
else if(flag)
{
x--;
flag = 0 ;
}
else
{
flag = 2;
break;
}
}
if(flag == 2 )
{
printf("NO\n");
}
else
{
printf("YES\n");
}
}
return 0 ;
}