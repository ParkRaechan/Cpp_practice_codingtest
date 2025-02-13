#include <iostream>
#include <string>
#include <queue>
using namespace std;
int arr[4]={-3,-1,1,3};
void Solve(string s){
	queue<pair<string,int>> q;
	q.push({s,0});
	string ss="",ss_1="";	int dd,index;
	while(!q.empty()){
		ss=q.front().first;
		dd=q.front().second;
		q.pop();
		
		//
		if(ss=="123456780"){
			cout<<dd;
			return;
		}
		//
		index=ss.find('0');
		
		//
		for(int i=0;i<4;i++){
			int r_index=index+arr[i];
			if(r_index>=0&&r_index<=8){
				ss_1=ss;
				swap(ss_1[r_index],ss_1[index]);
				q.push({ss_1,dd+1});
			}
		}
	}
	cout<<"-1";
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char index;	string arr="         ";
	for(int i=0;i<9;i++){
		cin>>arr[i];
	}
	Solve(arr);
	
	return 0;
}
