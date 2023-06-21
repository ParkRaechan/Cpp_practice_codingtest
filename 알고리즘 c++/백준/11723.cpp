#include <iostream>

using namespace std;
int arr[21];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		string cmd;
		int index;
		cin>>cmd;
		if(cmd=="add"){
			cin>>index;
			arr[index]=1;
		}else if(cmd=="remove"){
			cin>>index;
			arr[index]=0;
		}else if(cmd=="check"){
			cin>>index;
			if(arr[index]==1) cout<<"1\n";
			else cout<<"0\n";
		}else if(cmd=="toggle"){
			cin>>index;
			if(arr[index]==1) arr[index]=0;
			else arr[index]=1;
		}else if(cmd=="all"){
			for(int j=1;j<=20;j++) arr[j]=1;
		}else if(cmd=="empty"){
			for(int j=1;j<=20;j++) arr[j]=0;
		}
	}
	
	return 0;
}
