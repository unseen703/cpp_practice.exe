/******************READ-ONLY PART BEGINS*****************/
#include <bits/stdc++.h>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;
/*******************READ-ONLY PART ENDS******************/


long long teamFormation(vector<int> score, int team_size, int k) {
    
    set<pair<int, int>, greater<pair<int, int>> > q;
    int n = score.size();
    
    if( team_size  == n){
        long long ans = 0;
        for(auto &i: score) ans += i ;
        return ans;
    }
    if(k >= n/2){
        auto comp =  [](const pair<int, int> x, const pair<int, int> y ){ return (x.first == y.first)? (x.second<y.second) : (x.first>y.first);} ;
    auto st =  std::set<pair<int, int>,decltype(comp)>( comp );
        for(int i = 0; i< n ; i++){
                 st.insert(make_pair((int)score[i],  i));
        }

        long long ans = 0;

    int t =0;
    while( t < team_size){
        auto sel = *(st.begin());
        st.erase(st.begin());
        ans = ans + sel.first;
        
        t++;

    }

        return ans;
    }
    vector<int> vis(n, 0);
   for(int i= 0 ;i< k ; i++ ){
        q.insert(make_pair((int)score[i], n+ i));
        vis[i]++;
        vis[n-1-i]++;
        q.insert(make_pair((int)score[n-1-i], n-1-i));
    }
    long long ans = 0;
    int i = k; int j = n- k -1;
    int t =0;
    while( t < team_size){
        auto sel = *(q.begin());
        //    cout<<i <<" "<<(*q.begin()).first<<(*q.begin()).second<<" "<<j<<"\n";
        q.erase(q.begin());
        ans = ans + sel.first;
        // cout<<ans<<"\n";
        if( i< n && sel.second >= n) { 
            // vis[sel.second -n]++;
            while(i<n && vis[i])  i++;
            if(i < n)
       { q.insert(make_pair(score[i], n+ i ));
        vis[i]++;
        i++;
        }
        else{
            t++;
            break;
        }
        }
        else  if(j >= 0&& sel.second<n){
            //   vis[sel.second ]++;
            while(j >= 0&& vis[j])  j--;
            // cout<<j<<"\n";
            if(j >=0 )
           { q.insert(make_pair(score[j], j));
            vis[j]++;
            j--;
            }
            else {
                t++;
                 break;
            }
            }
            else {t++;break;}
        t++;
 
    }
    // cout<<q.size()<<" "<<t<<"\n";
    
        while(t < team_size && q.size()){
            // cout<< (*q.begin()).first<<" "<<ans<<"\n";
            ans = ans + (*q.begin()).first;
            q.erase(q.begin());
            t++;
        }
    

return ans;
}

/******************READ-ONLY PART BEGINS*****************/
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<int> score(n);

	for(auto &ele : score) {
		cin >> ele;
	}
	
	int team_size, k;
	cin >> team_size >> k;

	auto res = teamFormation(score, team_size, k);
	cout << res << endl;

	return 0;
}
/*******************READ-ONLY PART ENDS******************/



