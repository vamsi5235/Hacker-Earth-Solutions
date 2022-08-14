#include<stdio.h>

int main()

{int t,s,i,j,count;

scanf("%d",&t);

while(t--)

{count=0;

scanf("%d",&s);

for(i=1;i<=s;i++)

{

    for(j=i;j<=s;j++)

    {

        if(i*j<=s)

        count++;

    }

}

printf("%d\n",count);


 

}

    return 0;

}