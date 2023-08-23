#include <iostream>
#include <string>
#include <queue>
#include <set>
using namespace std;
set<string> visit;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void Solve(string s){
	queue<pair<string,int>> q;
	q.push({s,0});	visit.insert(s);
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
		int x=index/3;
		int y=index%3;
		//
		for(int i=0;i<4;i++){
			int r_index_x=x+dx[i];
			int r_index_y=y+dy[i];
			if(r_index_x>=0&&r_index_x<3&&r_index_y>=0&&r_index_y<3){
				ss_1=ss;
				swap(ss_1[x*3+y],ss_1[r_index_x*3+r_index_y]);
				if(visit.find(ss_1)==visit.end()){
					visit.insert(ss_1);
					q.push({ss_1,dd+1});
				}
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
