#include <iostream>

using namespace std;
int N,M,H;
bool arr[12][32];
bool Check(){
	for(int i=1;i<=N;i++){
		int temp=i;
		for(int j=1;j<=H;j++){
			if(arr[temp][j]){
				temp++;
			}else if(arr[temp-1][j]){
				temp--;
			}
		}
		if(temp!=i){
			return false;
		}
	}
	return true;
}
bool Solve2(int d,int y){
	if(d==0){
		if(Check()) return true;
		else return false;
	}
	
	bool result=false;
	for(int i=y;i<=N;i++){
		for(int j=1;j<=H;j++){
			if(!arr[i-1][j]&&!arr[i+1][j]&&!arr[i][j]){
				arr[i][j]=true;
				result=Solve2(d-1,i);
				if(result) return result;
				arr[i][j]=false;
			}
		}
	}
	
	return result;
}
void Solve1(){
	for(int i=0;i<=3;i++){
		if(Solve2(i,0)){
			cout<<i;
			return;
		}
	}
	cout<<"-1";
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N>>M>>H;
	for(int i=0;i<M;i++){
		int index1,index2; cin>>index1>>index2;
		arr[index2][index1]=true;
	}
	Solve1();
	
	return 0;
}
