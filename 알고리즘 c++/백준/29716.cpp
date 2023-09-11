#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int j,n,index=0,result=0; string str;
	cin>>j>>n;
	for(int i=0;i<=n;i++){
		getline(cin,str);
		index=0;
		for(int k=0;k<str.length();k++){
			if(str[k]>='a'&&str[k]<='z') index+=2;
			else if(str[k]>='A'&&str[k]<='Z') index+=4;
			else if(str[k]>='0'&&str[k]<='9') index+=2;
			else if(str[k]==' ') index+=1;
		}
		if(i!=0&&index<=j){
			result++;
		}
	}
	cout<<result;
	
	return 0;
}
