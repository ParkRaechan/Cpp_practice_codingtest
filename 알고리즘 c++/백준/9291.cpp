#include <iostream>

using namespace std;
int arr[11][11];
bool Solve1_1(){
	for(int i=1;i<=9;i++){
		int width[11]={0,};
		for(int j=1;j<=9;j++){
			int d=arr[i][j];
			width[d]++;
			if(width[d]>=2){
				return false;
			}
		}
	}
	return true;
}
bool Solve1_2(){
	for(int i=1;i<=9;i++){
		int leng[11]={0,};
		for(int j=1;j<=9;j++){
			int d=arr[j][i];
			leng[d]++;
			if(leng[d]>=2){
				return false;
			}
		}
	}
	return true;
}
bool Solve2_1(int x1,int x2,int y1,int y2){
	int square[11]={0,};
	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			int d=arr[i][j];
			square[d]++;
			if(square[d]>=2){
				return false;
			}
		}
	}
	return true;
}
bool Solve2(){
	if(Solve2_1(1,3,1,3)&&Solve2_1(1,3,4,6)&&Solve2_1(1,3,7,9)
	&&Solve2_1(4,6,1,3)&&Solve2_1(4,6,4,6)&&Solve2_1(4,6,7,9)
	&&Solve2_1(7,9,1,3)&&Solve2_1(7,9,4,6)&&Solve2_1(7,9,7,9)){
		return true;
	}else return false;
}
void ClearArr(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			arr[i][j]=0;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	for(int k=1;k<=t;k++){
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				cin>>arr[i][j];
			}
		}
		if(Solve1_1()&&Solve1_2()&&Solve2()){
			cout<<"Case "<<k<<": CORRECT\n";
		}else{
			cout<<"Case "<<k<<": INCORRECT\n";
		}
		ClearArr();
	}
	
	return 0;
}
