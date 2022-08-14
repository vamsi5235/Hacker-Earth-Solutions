#include <bits/stdc++.h>

using namespace std;

long long arr [100000 + 1];
bool vis [100000 + 10];
int pri [100000 + 10];

int N = 100000 + 10;

void sieve(){                               // mark prime numbers as false

    for(long long i = 2; i * i <= N; i++){
        if(!vis[i]){
            for( long long j = i * i; j <= N; j+= i){
                vis[j] = true;
            }
        }
    }
    for(int i = 2; i <= N; i++){            // store how many prime numbers from 1 : i
        pri[i] += pri[i - 1] + !vis[i];
    }

}

int main()
{
    long long t , n , m, mod = 1e9 + 7, ans = 1;

    sieve();
    cin >> t;

    while(t--){

        ans = 1;

        cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr , arr + n);
        reverse(arr, arr + n);                          // start from the largest value

        for(int i = 0; i < n; i++){

            long long subtract = pri[m] - pri[arr[i] - 1];      // number of prime numbers in the range
            long long ways = m - arr[i] + 1 - subtract - i;

            if(ways < 0){                                       // invalid case

                ans = 0;
                break;
            }
            ans = ( ans % mod * ways % mod) % mod;
        }

        cout << ans << "\n";
    }

    return 0;
}