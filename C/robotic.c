#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    long long int n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &n);
        printf("%lld\n", n*(n+1)); // for counting the no. of steps 
    }
}