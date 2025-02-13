#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;cin>>n;
	string s,s_1,s_2,s_3;cin>>s;
	if(n==1){
		s_1=s;
		for(int i=0;i<s.length();i++){
			if(s[i]>='A'&&s[i]<'a'){
				s_2+="_";
				s_2+=s[i]+32;
			}else s_2+=s[i];
		}
		s_3+=s[0]-32;
		for(int i=1;i<s.length();i++){
			s_3+=s[i];
		}
	}else if(n==2){
		for(int i=0;i<s.length();i++){
			if(s[i]=='_'){
				i++;
				s_1+=s[i]-32;
			}else s_1+=s[i];
		}
		s_2=s;
		s_3+=s[0]-32;
		for(int i=1;i<s.length();i++){
			if(s[i]=='_'){
				i++;
				s_3+=s[i]-32;
			}else s_3+=s[i];
		}
	}else{
		s_1+=s[0]+32;
		for(int i=1;i<s.length();i++){
			s_1+=s[i];
		}
		s_2+=s[0]+32;
		for(int i=1;i<s.length();i++){
			if(s[i]>='A'&&s[i]<'a'){
				s_2+="_";
				s_2+=s[i]+32;
			}else s_2+=s[i];
		}
		s_3=s;
	}
	cout<<s_1<<"\n"<<s_2<<"\n"<<s_3;
	
	
	return 0;
}
