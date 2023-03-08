#include <iostream>

using namespace std;

const int MOD=1000000;
long long d[5001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin>>str;
	
	int len=str.size();
	str=" "+str;
	
	d[0]=1;
	for(int i=1;i<=len;i++){
		int x=str[i]-'0';
		if(0<x){
			d[i]=(d[i]+d[i-1])%MOD;
		}
		if(i==1||str[i-1]=='0'){
			continue;
		}
		x=(str[i-1]-'0')*10+(str[i]-'0');
		if(10<=x&&x<=26){
			d[i]=(d[i]+d[i-2])%MOD;
		}
	}
	cout<<d[len]<<"\n";
	
	return 0;
}
