/******************READ-ONLY PART BEGINS*****************/
#include <bits/stdc++.h>
using namespace std;
/*******************READ-ONLY PART ENDS******************/

vector<int> primes;
void fillsieve(int N)
{
    N++;
    primes.push_back(2);
    vector<int> seive(N+1);
    for (long long i = 3; i < N; i += 2)
        seive[i] = i;
    for (long long i = 3; i * i < N; i++)
        if (seive[i] == i)
            for (long long j = 3 * i; j < N; j += 2 * i)
               {
                 seive[j] = i;
                //  cout<<j<<seive[j]<<'\n';
               }

 for (long long i = 3; i < N; i += 2)
       if( seive[i] == i){ primes.push_back(i);}
}
int mod = 1000007;
        //    847665
 long long bin_multiply(long long a, long long b){ long long ans = 0; while(b){ if(b&1) ans = (ans+a )%mod; a = (a+a )%mod; b>>=1;} return ans;}

int ArithmeticEquation(int n) {
    // int x =48;
    fillsieve(n+3);
    long long ans = 1;
    for(int i = 0; i <primes.size()&& primes[i]<=n; i++){
        int p =primes[i];
        int t = n;
        long long a = 0;
        int pw = 1;

        // while(floor(t/pow(p, pw))){
        //       a+=floor (t/pow(p, pw));
        //     pw++;
        // }
   while(floor(t/p)){
        a+=floor(t/p);
        t = t/p;
    }
        // cout<<a<<" "<<p<<"\n"/;
        // if( p == 5 || p == 7 )
        // ans  = (ans%mod)* ((2LL*a +   1)%mod);
        ans = bin_multiply(ans, 2LL*a +1);
    }
    // cout<<ans<<"\n";
return ans;
}

/******************READ-ONLY PART BEGINS*****************/
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	int res = ArithmeticEquation(n);
	cout << res << endl;

	return 0;
}
/*******************READ-ONLY PART ENDS******************/