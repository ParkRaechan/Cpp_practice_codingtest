#include <iostream>

using namespace std;
bool arr[10001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m,n; cin>>m>>n;
	arr[1]=true;
	for(int i=2;i<=n;i++){
		if(!arr[i]){
			for(int j=2;j*i<=n;j++){
				int index=j*i;
				arr[index]=true;
			}
		}
	}
	int mi=99999,sum=0;
	for(int i=m;i<=n;i++){
		if(!arr[i]){
			if(mi==99999){
				mi=i;
			}
			sum+=i;
		}
	}
	if(mi==99999){
		cout<<"-1";
	}else{
		cout<<sum<<"\n";
		cout<<mi;
	}
	
	return 0;
}
