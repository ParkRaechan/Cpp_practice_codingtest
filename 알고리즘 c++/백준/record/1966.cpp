#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int arr[10];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int d;cin>>d;
	while(d--){
		int n,m; cin>>n>>m;
		for(int j=0;j<n;j++){
			int index; cin>>index;
			arr[index]++; q.push(index);
		}
		int t=0;
		while(!q.empty()){
			int M=0;
			for(int i=9;i>=1;i--){
				if(arr[i]!=0){
					M=i; break;
				}
			}
			int a=q.front();
			if(a==M){
				q.pop();
				t++;
				arr[M]--;
				if(m==0){
					cout<<t<<"\n";
					break;
				}else{
					m--;
				}
			}else{
				q.pop();
				q.push(a);
				if(m==0){
					m=q.size()-1;
				}else{
					m--;
				}
			}
		}
		
		for(int i=1;i<10;i++){
			arr[i]=0;
		}
		while(!q.empty()) q.pop();
	}
	
	return 0;
}
