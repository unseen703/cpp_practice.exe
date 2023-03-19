#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
	
	multimap<int,string> m;
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
	    int marks;
	    string name;
	    cin>>name>>marks;
	    m.insert({marks,name});
	}
	
	auto curent_it = --m.end();
	while(true){
	    auto &students= curent_it->second;
	    auto &marks = curent_it->first;
	    
	    cout<<students<<" "<<marks<<endl;
	    
	    if(curent_it == m.begin()){
	        break;
	    }
	    curent_it--;
	}
	
	return 0;
}