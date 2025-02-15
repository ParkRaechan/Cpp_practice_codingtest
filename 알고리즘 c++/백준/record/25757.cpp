#include <iostream>
#include <unordered_set>
using namespace std;
unordered_set<string> st;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; char game;
	cin>>n>>game;
	for(int i=0;i<n;i++){
		string s; cin>>s;
		st.insert(s);
	}
	int needed_sum;
	if(game=='Y') needed_sum=1;
	else if(game=='F') needed_sum=2;
	else if(game=='O') needed_sum=3;
	cout<<st.size()/needed_sum;
	
	return 0;
}
