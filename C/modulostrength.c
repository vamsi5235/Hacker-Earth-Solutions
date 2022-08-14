#include<iostream>

#include<vector>

#include<map>

using namespace std;

                   

int main(){

    vector<pair<long,long>> v;

    map<long,long> m;               //  by default map makes its pair value 0  

    while(1)

   {  pair<long,long> p;

       cin>>p.first>>p.second;

       if(p.first==-1){break;}

       

       v.push_back(p);

       m[p.first]++;

       m[p.second]++;    }


 

   for (long i = 0; i < v.size() ; i++)

      cout<<(m[v[i].first] > m[v[i].second] ? "0 1\n": (m[v[i].first] < m[v[i].second]) ? "1 0\n": "-1 -1\n");

 

return 0;

}