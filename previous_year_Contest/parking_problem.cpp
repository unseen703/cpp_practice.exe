/******************READ-ONLY PART BEGINS*****************/
#include <bits/stdc++.h>
using namespace std;
/*******************READ-ONLY PART ENDS******************/

long long carParkingRoof(vector<long long> cars, int k) {
    sort(cars.begin(), cars.end());
    long long ans = 1e16;
    int i = 0; 
    for( int en = 0; en < cars.size(); en++){
        if( en - i+1 < k) continue;
        // cout<<"check\n"<<cars[en] - cars[i];
         ans = min(ans, cars[en] - cars[i] +1);
          i++;

    }
    return ans;
}

/******************READ-ONLY PART BEGINS*****************/
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	vector<long long> cars(n);
	for(auto &ele : cars) {
		cin >> ele;
	}
	int k; cin >> k;

	auto res = carParkingRoof(cars, k);
	cout << res << endl;

	return 0;
}
/*******************READ-ONLY PART ENDS******************/