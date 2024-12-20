#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c; cin>>a>>b>>c;
	int result=a+b-c;
	string aa=to_string(a),bb=to_string(b);
	string s=aa+bb;
	int index=stoi(s);
	cout<<result<<"\n"<<index-c;
	
	return 0;
}
