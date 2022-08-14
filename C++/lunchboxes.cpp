#include<bits/stdc++.h>

using namespace std;

int main()

{

        int t,i=0,c=0;

        cin>>t;

        while(t>0)

        { long long int n,m;

                cin>>n>>m;

                long long int a[m];

                for(i=0;i<m;i++)

                { cin>>a[i];}

                sort(a,a+m);

                i=0;

                c=0;

                //for(i=0;i<m;i++)

                //{ cout<<a[i];}

                while(n>=a[i])

                {

                        n=n-a[i];//cout<<n;

                        c=c+1;

                        i=i+1;

                }

                cout<<c<<endl;

                t--;

        }

        return 0;

}