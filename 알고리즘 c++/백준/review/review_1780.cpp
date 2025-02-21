#include <iostream>
#pragma GCC optimize("O3")
using namespace std;
int arr[2200][2200];
int result[3];
void Solve(int x1,int y1,int x2,int y2){
	int target=arr[x1][y1];
	for(int i=x1;i<=x2;i++){
		for(int j=y1;j<=y2;j++){
			if(arr[i][j]!=target){
				//case::3x3&&wrong
				if((x2-x1)==2){
					for(int i1=x1;i1<=x2;i1++){
						for(int j1=y1;j1<=y2;j1++){
							int index=arr[i1][j1];
							result[index+1]++;
						}
					}
					return;
				}
				//case::other&&wrong
				int index1=x2-x1+1;
				int index2=index1/3-1;
				int index3_1_1=x1,index3_1_2=x1+index2,
				index3_2_1=index3_1_2+1,index3_2_2=index3_2_1+index2,
				index3_3_1=index3_2_2+1,index3_3_2=index3_3_1+index2;
				int indexy1=y2-y1+1;
				int indexy2=indexy1/3-1;
				int indexy3_1_1=y1,indexy3_1_2=y1+indexy2,
				indexy3_2_1=indexy3_1_2+1,indexy3_2_2=indexy3_2_1+indexy2,
				indexy3_3_1=indexy3_2_2+1,indexy3_3_2=indexy3_3_1+indexy2;
				//first_line
				Solve(index3_1_1,indexy3_1_1,index3_1_2,indexy3_1_2);
				Solve(index3_1_1,indexy3_2_1,index3_1_2,indexy3_2_2);
				Solve(index3_1_1,indexy3_3_1,index3_1_2,indexy3_3_2);
				//second_line
				Solve(index3_2_1,indexy3_1_1,index3_2_2,indexy3_1_2);
				Solve(index3_2_1,indexy3_2_1,index3_2_2,indexy3_2_2);
				Solve(index3_2_1,indexy3_3_1,index3_2_2,indexy3_3_2);
				//third_line
				Solve(index3_3_1,indexy3_1_1,index3_3_2,indexy3_1_2);
				Solve(index3_3_1,indexy3_2_1,index3_3_2,indexy3_2_2);
				Solve(index3_3_1,indexy3_3_1,index3_3_2,indexy3_3_2);
				return;
			}
		}
	}
	//case::all_right
	result[target+1]++;
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	Solve(1,1,n,n);
	for(int i=0;i<3;i++){
		cout<<result[i]<<"\n";
	}
	
	return 0;
}
