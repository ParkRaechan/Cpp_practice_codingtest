#include <iostream>

using namespace std;
string s[7];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	//
	s[0]="Never gonna give you up";
	s[1]="Never gonna let you down";
	s[2]="Never gonna run around and desert you";
	s[3]="Never gonna make you cry";
	s[4]="Never gonna say goodbye";
	s[5]="Never gonna tell a lie and hurt you";
	s[6]="Never gonna stop";
	
	//
	int n; string str; bool index=false;
	cin>>n;
	for(int i=0;i<=n;i++){
		index=false;
		getline(cin,str);
		for(int j=0;j<7;j++){
			if(str==s[j]) index=true;
			if(index==false&&j==6&&i!=0){
				cout<<"Yes";
				return 0;
			}
		}
	}
	
	cout<<"No";
	
	return 0;
}
