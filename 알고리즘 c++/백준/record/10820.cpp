#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	while(getline(cin,str)){
		int smallL=0,capitalL=0,number=0,space=0;
		if(str=="") break;
		for(int i=0;i<str.length();i++){
			if((str[i]-'a')>=0&&(str[i]-'a')<=26){
				smallL++;
			}else if((str[i]-'A')>=0&&(str[i]-'A')<=26){
				capitalL++;
			}else if((str[i]-'0')>=0&&(str[i]-'0')<=9){
				number++;
			}else if(str[i]==' '){
				space++;
			}
		}
		cout<<smallL<<" "<<capitalL<<" "<<number<<" "<<space<<"\n";
	}
	
	return 0;
}
