#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		bool index1=false,index2=true,index3=true;
		int conso=0,vow=0;
		string s; cin>>s;
		if(s=="end") break;
		for(int i=0;i<s.length();i++){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				index1=true;
				vow++; conso=0;
			}else{
				conso++; vow=0;
			}
			if(i==0) continue;
			if(s[i]==s[i-1]){
				if(s[i]=='e'||s[i]=='o') continue;
				else{
					index2=false;
					break;
				}
			}
			if(vow>=3||conso>=3){
				index3=false;
				break;
			}
		}
		cout<<"<"<<s<<"> is ";
		if(index1==false||index2==false||index3==false){
			cout<<"not acceptable.\n";
		}else{
			cout<<"acceptable.\n";
		}
	}
	
	return 0;
}
