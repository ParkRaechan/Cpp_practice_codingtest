#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N; cin>>N;
	int A,B,C,D; cin>>A>>B>>C>>D;
	char ch[N+1]; ch[0]='x';
	for(int i=1;i<=N;i++){
		cin>>ch[i];
	}
	
	
	if(ch[1]!=ch[N]){
		cout<<"No";
		return 0;
	}
	
	if(ch[1]!='a'){
		cout<<"No";
		return 0;
	}
	
	for(int i=1;i<=N;i++){
		if(ch[i]!=ch[i-1]){
			if(ch[i]=='a'){
				A--;
			}else if(ch[i]=='b'){
				B--;
			}else if(ch[i]=='c'){
				C--;
			}else if(ch[i]=='d'){
				D--;
			}
			
			if(A<0||B<0||C<0||D<0){
				cout<<"No";
				return 0;
			}
		}else{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	
	return 0;
}
