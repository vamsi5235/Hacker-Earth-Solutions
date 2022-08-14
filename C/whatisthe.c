#include<stdio.h>

#include<string.h>

int main()

{

    int arr[]={6,2,5,5,4,5,6,3,7,6};

    char s[100];

    scanf("%s",s);

    int sum=0;

    for(int i=0;i<strlen(s);i++)

    {

        int num=s[i]-'0';

        sum=sum+arr[num];

    }

    printf("%d",sum);

}