#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
using namespace std;
queue<pair<int,int>> q;
set<int> s;
bool visit[201][201];
void Solve(int a,int b,int c){
	q.push({0,c});
	
	while(!q.empty()){
		int a_1=q.front().first;
		int c_1=q.front().second;
		int b_1=c-a_1-c_1;
		q.pop();
		
		if(visit[a_1][c_1]) continue;
		visit[a_1][c_1]=true;
		if(a_1==0){
			if(c_1>=0&&c_1<=c) s.insert(c_1);
		}
		
		int index=a_1+b_1;
		if(a>=index) q.push({index,c_1});
		else q.push({a,c_1});
		if(b>=index) q.push({0,c_1});
		else q.push({index-b,c_1});
		
		index=a_1+c_1;
		if(a>=index) q.push({index,0});
		else q.push({a,index-a});
		if(c>=index) q.push({0,index});
		else q.push({index-c,index});
		
		index=c_1+b_1;
		if(c>=index) q.push({a_1,index});
		else q.push({a_1,c});
		if(b>=index) q.push({a_1,0});
		else q.push({a_1,index-b});
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c;	cin>>a>>b>>c;
	Solve(a,b,c);
	for(auto i=s.begin();i!=s.end();++i){
		cout<<*i<<" ";
	}
	
	return 0;
}
