#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
#include <stdint.h>
#include <time.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define int long long
#define endl "\n"
using namespace std;
 
int f(int num)
{
 int sum=0;
 while(num!=0)
 {
 sum+=num%10;
 num/=10;
 }
 return sum*sum*sum;
}
 
 
int32_t main()
{
 fast
 clock_t timer;
 timer = clock();
 //freopen("input.txt","r",stdin);
 //freopen("output.txt","w",stdout);
 //freopen("error.txt","w",stderr);
 int t;
 cin >> t;
 while(t--)
 {
 int n,k,prev;
 cin >> n >> k;
 //cerr << "n=" << n << endl;
 vector<int> ans;
 map<int,int> s;
 int threshold=0,index=0;
 while(true)
 {
 prev=f(n);
 if(s.find(prev)!=s.end())
 {
 threshold=s[prev];
 break;
 }
 s[prev]=index++;
 ans.push_back(prev);
 //cerr << prev << endl;
 n=prev;
 }
 if(k<=threshold)
 cout << ans[k-1] << endl;
 else
 {
 //cerr << "threshold=" << threshold << endl;
 int mod=ans.size()-threshold;
 //cerr << "mod=" << mod << endl;
 //cerr << k << "-" << threshold << "=" << k-threshold << endl;
 k-=threshold-1;
 //cerr << k%mod + threshold << endl;
 cout << ans[k%mod + threshold] << endl;
 }
 }
 timer = clock() - timer;
 double time_taken = ((double)timer)/CLOCKS_PER_SEC; // in seconds
 
 //cerr << "time taken=" << time_taken << "seconds" << endl;
 return 0;
}