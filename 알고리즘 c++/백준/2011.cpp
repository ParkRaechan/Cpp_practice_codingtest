#include <iostream>
#define Max 5000
using namespace std;

int Arr[Max];
int DP[Max],Len;
string Inp;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>Inp;
	Len=Inp.length();
	for(int i=1;i<=Len;i++){
		Arr[i]=Inp[i-1]-'0';
	}
	
	if(Len==1&&Inp[0]=='0'){
		cout<<0<<"\n";
		return 0;
	}
	DP[0]=1;
	for(int i=1;i<=Len;i++){
		if(Arr[i]>=1&&Arr[i]<=9){
			DP[i]=(DP[i-1]+DP[i])%1000000;
		}
		if(i==1) continue;
		int temp=Arr[i]+Arr[i-1]*10;
		if(temp>=10&&temp<=26){
			DP[i]=(DP[i-2]+DP[i])%1000000;
		}
	}
	cout<<DP[Len]<<"\n";
	
	return 0;
}
