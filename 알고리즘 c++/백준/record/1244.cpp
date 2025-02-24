#include <iostream>

using namespace std;
bool arr[102];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sw; cin>>sw;
	for(int i=1;i<=sw;i++){
		cin>>arr[i];
	}
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int gender; cin>>gender;
		int index; cin>>index;
		if(gender==1){
			int value=index;
			while(value<=sw){
				if(arr[value]) arr[value]=0;
				else arr[value]=1;
				value+=index;
			}
		}else if(gender==2){
			int start=index,end=index;
			while(start>=1&&end<=sw){
				int st=start; int ed=end;
				st--; ed++;
				if(st<=0||ed>sw) break;
				if(arr[st]!=arr[ed]) break;
				start=st; end=ed;
			}
			for(int j=start;j<=end;j++){
				if(arr[j]) arr[j]=0;
				else arr[j]=1;
			}
		}
	}
	for(int i=1;i<=sw;i++){
		cout<<arr[i];
		if(i%20==0) cout<<"\n";
		else cout<<" ";
	}
	
	return 0;
}
