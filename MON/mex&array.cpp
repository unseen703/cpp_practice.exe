// Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {
    // int n;
	// cin>>n; 
	// int ar[n];
	// fi(n) cin>>ar[i];
    // int ans=0,no=0;
    // rep(i,1,n-1) {
    //     if((ar[i]%2)) 
    //     ans+=(ar[i]/2)+1;
    //     else
    //     ans+=ar[i]/2;
    //     if(ar[i]==1) no++;
    // }
    // if(no==n-2) {
    //     cout<<"-1\n"; return;
    // }
    // if(n==3 && ar[1]%2) {
    // cout<<"-1\n"; return;
    // }
    // cout<<ans<<endl;
    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        // Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {
    // int n;
	// cin>>n; 
	// int ar[n];
	// fi(n) cin>>ar[i];
    // int ans=0,no=0;
    // rep(i,1,n-1) {
    //     if((ar[i]%2)) 
    //     ans+=(ar[i]/2)+1;
    //     else
    //     ans+=ar[i]/2;
    //     if(ar[i]==1) no++;
    // }
    // if(no==n-2) {
    //     cout<<"-1\n"; return;
    // }
    // if(n==3 && ar[1]%2) {
    // cout<<"-1\n"; return;
    // }
    // cout<<ans<<endl;
    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        // Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {
    // int n;
	// cin>>n; 
	// int ar[n];
	// fi(n) cin>>ar[i];
    // int ans=0,no=0;
    // rep(i,1,n-1) {
    //     if((ar[i]%2)) 
    //     ans+=(ar[i]/2)+1;
    //     else
    //     ans+=ar[i]/2;
    //     if(ar[i]==1) no++;
    // }
    // if(no==n-2) {
    //     cout<<"-1\n"; return;
    // }
    // if(n==3 && ar[1]%2) {
    // cout<<"-1\n"; return;
    // }
    // cout<<ans<<endl;
    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        // Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {
    // int n;
	// cin>>n; 
	// int ar[n];
	// fi(n) cin>>ar[i];
    // int ans=0,no=0;
    // rep(i,1,n-1) {
    //     if((ar[i]%2)) 
    //     ans+=(ar[i]/2)+1;
    //     else
    //     ans+=ar[i]/2;
    //     if(ar[i]==1) no++;
    // }
    // if(no==n-2) {
    //     cout<<"-1\n"; return;
    // }
    // if(n==3 && ar[1]%2) {
    // cout<<"-1\n"; return;
    // }
    // cout<<ans<<endl;
    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        // Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {
    // int n;
	// cin>>n; 
	// int ar[n];
	// fi(n) cin>>ar[i];
    // int ans=0,no=0;
    // rep(i,1,n-1) {
    //     if((ar[i]%2)) 
    //     ans+=(ar[i]/2)+1;
    //     else
    //     ans+=ar[i]/2;
    //     if(ar[i]==1) no++;
    // }
    // if(no==n-2) {
    //     cout<<"-1\n"; return;
    // }
    // if(n==3 && ar[1]%2) {
    // cout<<"-1\n"; return;
    // }
    // cout<<ans<<endl;
    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        // Hi! One day, you'll do it:) 
#include <bits/stdc++.h>
#include <bits/valarray_after.h>
using namespace std;
#pragma gcc optiminize("Ofast")
#pragma gcc target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmaxi,avx,avx2,tune=native")
#pragma gcc optiminize("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")
#define all(z)              (z).begin(), (z).end()       
#define int                 long long          
#define fi(n)               for(int i=0;i<n;i++)
#define fj(n)               for(int j=0;j<n;j++)
#define fk(n)               for(int k=0;k<n;k++) 
#define setp(x)	            fixed<<setprecision(x)  
#define rep(i,a,b)          for(int i=a;i<b;i++)
#define mem(a,b)            memset(a,b,sizeof(a))
#define endl                "\n"
typedef long double ld;            const ld pi=3.141592653589;               const int mod = 1000000007;     //const int INF = 5e18;                             
typedef pair<int, int> pii;        typedef vector<int> vi;                   typedef vector<pii> vpii;       typedef vector<vi> vvi;    
typedef set<int> si;               typedef set<pii> spi;                     typedef multiset<int> msl;      typedef vector<string> vs; 
vi primes,fibonacci;        int xorval(int n);
bool isPrime(int n);        void sieve(int N);
int lcm(int a,int b);       int poww(int n,int k);
int nCr(int n,int r);       int leap(int y);    
void fiboseries(int n);     int fiboN(int n);
int modInverse(int a,int m);
string baseto10(string s,int b);   
string basefrom10(string s,int b); 
bool ispow2 (int n) {return n && (!(n&(n-1)));}
double dis_p(int x1,int y1,int x2,int y2);
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};    
string months[12]={"January","February","March","April","May","June","July","August","September","October","Falsevember","December"};

// USE stoll for string to integer //DIVIDE MOD dekhlena
// v.erase(unique(v.begin(),v.end()),v.end()); //for unique
// MAP,SET-i->first (For lb and ub, use [name.lb/ub(val)]; 
// (n & ~n) returns rightmost 1 bit in n  || s.find==-1 meval absent
// n<<i == n*(2^i)   while n>>i== n/(2^i)  closing side is used
// if((it&(1ll<<i))) for checking ith bit is 1 or 0
// When n%n==n, use (n-1)%n +1 == n (1487B)
// 279C (calc False. from back of array,q=0; q+=(p*arr[i]); p*=10; )
// Max GCD is (a-b) and max when a,a/2 --> a/2 is max 
// Copy vector by '=' //MAP,SET-  auto(add is Falset int)
// INTERACTIVE: use flush between cout and cin: cout--flush--cin
// TRY TO AVOID FLOATING NUMBERS BY MULTIPLY //488B
// CODE STARTS (TEMPLATE FUNCTIONS ARE BELOW THE MAIN FUNCTIONS)
// EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI
// IF TLE + Q can be solved by int, remove longlong (int is fast)

void sweetheart()   {

    int n,x; cin>>n;
    int ar[n]; 
    fi(n)
    cin>>ar[i];
    int sum=0,fuck=-1;
    fi(n) {
        rep(j,i,n) {
            fuck=0;
            fuck+=(j-i+1);
            rep(k,i,j+1) 
            if(!ar[k])
            fuck++;
            sum+=fuck;
        }
    }
    cout<<sum<<endl;
}  //EDGE CASES DEKHA KAR CHUTIYE, HAR BAAR CHOR DETA HAI

///////// MAIN FUNCTION ///////////////////////////////////////////
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);    cout.tie(0);  cerr.tie(0);
    string jaaneman = "1";
    getline(cin, jaaneman);
    int me = stoll(jaaneman);    int you = 0;
    while ((you++) < me)    {
        //cout<<"Case #"<<al<<": ";
        sweetheart();
    }
    cerr << "Time: " << 1000 * clock() / CLOCKS_PER_SEC<< " minilliansond";
    return 0;
}

//CODE BELOW FOR TEMPLATE FUNCTIONS (Changed at 1520 F1)
bool isPrime(int n) {
    if (n<2)               return 0;
    if (n<4)               return 1;
    if (!(n%2) || !(n%3))   return 0;
    for (int i = 5; i * i <= n; i += 6)
    if (!(n % i) || !(n % (i + 2)))
    return 0;
    return 1;
}
void sieve(int N){
vi check(N+1);
for (int i=2;i<=N;i++) {
    if (!check[i]) 
    check[i] = i,primes.push_back(i);
    for (int j=0;j<primes.size() && primes[j]<=check[i] && i*primes[j]<=N;j++) 
    check[i * primes[j]] = primes[j];   }   
}
double dis_p(int x1, int y1, int x2, int y2)    { 
    double distance = sqrt((x1 - y1)*(x1 - y1) + (x2 - y2)*(x2 - y2));
    return distance;
}  
int lcm(int a, int b){
    return ((a * b) / lcm(a, b));       }
int poww(int n, int k)   { 
    int x=1;   //if mod (mod on 13th straight)
    while (k)   {
        if (k & 1)   
		{ x*= n; x%=mod; }
        n*=n;
		n%=mod;
        k>>=1;
    }
    return x;
}   //multi n^k
int nCr(int n, int r)   { // n C r coefficient
    if(r>n) return 0;
    if(r>n-r) r=n-r;
    int calc=1;
    for(int i=1;i<=r;i++) {
        calc*=(n-r+i);
        calc/=i;
    }
    return calc;   
}
int modInverse(int a, int m)  { 
    if (m==1) 
    return 0; //edge case
    int initialmod=m, y=0,x=1; 
    while (a>1)   { 
    //changing (A,B)--> (B, A%B) till a>1
        int q=a/m;  // q is quotient 
        int t=m;
        m=a%m;  // m->remainder(from q)
        a=t;    // process same as
        t=y;    // Euclid's algo 
        y=x-q*y; 
        x=t;   // Update y and x 
    }   //ax + bm = 1 (gcd(a,m)==1 (coprime))
    if (x<0) 
    x+=initialmod; 
    return x; 
} 
void fiboseries(int n)  {   
    fibonacci.push_back(0);     fibonacci.push_back(1);
    int no=0,c2=1;  int c3=no+c2;
    while(c2<n) {
        c3=no+c2;   no=c2;      c2=c3;
        fibonacci.push_back(c3);      
    }// Series upto N
}   
int fiboN(int n)    {   
    //For DIRECTLY Nth TERM: Fn = {[(√5 + 1)/2] ^ n} / √5 
    if(n<=1) return n;
    return fiboN(n-1) + fiboN(n-2);
}   // N+1 as indexing starts from 0
string baseto10(string s, int b) {
    int num=0; 
    fi(s.size()){
        if(isdigit(s[i]))
        num=num*b+(s[i]-'0');
        else 
        num=num*b+(s[i]-'A'+10);
    }
    return to_string(num);
} 
string basefrom10(string s,int b) {
    string num; 
    int n=stoll(s);
    while(n) {
        int x=n%b;  n/=b;
        if(x<10)
        num+=char('0'+x);
        else 
        num+=char('A'+x-10);
    }
    reverse(all(num));
    return num;
}
int leap(int y) {
    if (y%400 == 0)         return 1;
    else if (y%100 == 0)    return 0;
    else if (y%4 == 0)      return 1;
    else                    return 0;
}
int xorval(int n){
    if (n%4==0)             return n; //0,4,8,12
    else if (n%4==1)        return 1; //1,5,9
    else if (n%4==2)        return n+1; //2,6,10
    return 0;
}
        