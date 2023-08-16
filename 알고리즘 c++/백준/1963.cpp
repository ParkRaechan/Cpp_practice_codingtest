#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
int arr[10010];
int visit[10010];
int solve(string start,string target){
	queue<string> q;
	q.push(start);
	string next,s;
	while(!q.empty()){
		s=q.front();
		if(s==target) break;
		q.pop();
		for(int i=0;i<4;i++){
			for(char c='0';c<='9';c++){
				if(c=='0'&&i==0) continue;
				next=s;
				next[i]=c;
				int snext=stoi(next);
				
				if(arr[snext]!=0&&visit[snext]==0){
					q.push(next);	//next=string	snext=int
					visit[snext]=visit[stoi(s)]+1;
				}
			}
		}
	}
	return visit[stoi(target)]-1;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<10000;i++){
		arr[i]=i;
	}
	arr[1]=0;
	for(int i=2;i<5000;i++){
		if(arr[i]==0) continue;
		for(int j=2*i;j<10000;j+=i){
			arr[j]=0;
		}
	}
	int index; cin>>index;
	for(int i=0;i<index;i++){
		string input_1,input_2;	cin>>input_1>>input_2;
		visit[stoi(input_1)]=1;
		int result=solve(input_1,input_2);
		if(result==-1){
			cout<<"Impossible\n";
		}else{
			cout<<result<<"\n";
		}
		for(int i=0;i<=10000;i++){
			visit[i]=0;
		}
	}
	
	return 0;
}
