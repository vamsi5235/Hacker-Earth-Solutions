#include<stdio.h>

#include<string.h>

int isPalindrome(char s[200000])

{

int l=0,r=strlen(s)-1;

while(l<r)

{

if(s[l]!=s[r])

return 0;

l++;

r--;

}

return 1;

}

void sort(char s[200000],int n)

{

int alp[26]={0};

for(int i=0;i<n;i++)

alp[s[i]-97]+=1;

for(int i=0;i<26;i++)

{

for(int j=1;j<=alp[i];j++)

{

printf("%c",i+97);

}

}

}

int main()

{

int t;

scanf("%d",&t);

while(t--)

{

char s[200000];

scanf("%s",s);

if(isPalindrome(s))

printf("-1\n");

else

{

sort(s,strlen(s));

printf("\n");

 

}


 

}

}