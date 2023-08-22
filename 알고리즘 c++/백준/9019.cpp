#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
bool visit[10000];
int start,eend;
void Initionalize(){
	memset(visit,false,sizeof(visit));
}
string Solve(int a){
	queue<pair<int,string>> q;
	q.push({a,""});
	visit[a]=true;
	while(!q.empty()){
		int x=q.front().first;
		string s=q.front().second;
		q.pop();
		
		if(x==eend) return s;
		//
		int index=x*2;
		if(index>9999) index=index%10000;
		if(visit[index]==false){
			visit[index]=true;
			q.push({index,s+"D"});
		}
		//
		index=x-1;
		if(index<0) index=9999;
		if(!visit[index]){
			visit[index]=true;
			q.push({index,s+"S"});
		}
		//
		index=(x%1000)*10+(x/1000);
		if(!visit[index]){
			visit[index]=true;
			q.push({index,s+"L"});
		}
		//
		index=(x%10)*1000+(x/10);
		if(!visit[index]){
			visit[index]=true;
			q.push({index,s+"R"});
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;	cin>>t;
	int a,b;
	for(int r=0;r<t;r++){
		Initionalize();
		cin>>start>>eend;
		cout<<Solve(start)<<"\n";
	}
	
	return 0;
}
