#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	string cs;
	for(int i=0;i<t;i++){
		string result="YES";
		cin>>cs;
		int vps_1=0,vps_2=0;
		for(int j=0;j<cs.length();j++){
			if(cs.substr(j,1)=="("){
				vps_1++;
			}else if(cs.substr(j,1)==")"){
				vps_2++;
			}
			if(vps_1<vps_2){
				result = "NO";
			}
		}
		if(vps_1!=vps_2){
			result="NO";
		}
		cout<<result<<"\n";
	}
	
	return 0;
}
