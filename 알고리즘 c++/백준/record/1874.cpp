#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int arr[100001];
vector<bool> v;
stack<int> s;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	bool res=true;
	
	int j=1,i=1;
	while(1){
		if(!s.empty()){
			if(s.top()==arr[j]){
				s.pop();
				v.push_back(false);
				j++;
			}else if(i==arr[j]){
				v.push_back(true);
				v.push_back(false);
				i++;
				j++;
			}else{
				if(i>n){
					res=false;
					break;
				}
				s.push(i);
				v.push_back(true);
				i++;
			}
		}else{
			if(i>n) break;
			s.push(i);
			v.push_back(true);
			i++;
		}
	}
	if(res){
		for(int i=0;i<v.size();i++){
			if(v[i]) cout<<"+\n";
			else cout<<"-\n";
		}
	}else cout<<"NO";
	
	return 0;
}
