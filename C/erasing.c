#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--){
int n;
int count=1;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n-1;i++){
if(arr[i]==1 && arr[i+1]==0)
count++;
}
    printf("%d\n",count);
}
}