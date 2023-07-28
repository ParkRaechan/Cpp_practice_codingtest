#include <iostream>
#include <string>
using namespace std;
bool arr[10];
bool check(int n){
	string s=to_string(n);
	for(int i=0;i<s.length();i++){
		if(arr[s[i]-'0']){
			return false;
		}
	}
	return true;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,number_err;
	cin>>n>>number_err;
	
	for(int i=0;i<number_err;i++){
		int index; cin>>index;
		arr[index]=true;
	}
	
	int ch=n;	int index_p=0,index_m=0;
	while(ch<=1000000){
		if(ch==100){
			break;
		}else if(ch==101||ch==99){
			index_p++;
			break;
		}else if(ch==102){
			index_p+=2;
			break;
		}
		if(check(ch)){
			string s=to_string(ch);
			index_p+=s.length();
			break;
		}else{
			if(ch==1000000){
				index_p=1000001;
				break;
			}
			index_p++;
			ch++;
		}
	}
	ch=n;
	while(ch>=0){
		if(ch==100){
			break;
		}else if(ch==101||ch==99){
			index_m++;
			break;
		}else if(ch==102){
			index_m+=2;
			break;
		}
		if(check(ch)){
			string s=to_string(ch);
			index_m+=s.length();
			break;
		}else{
			if(ch==0){
				index_m=1000001;
				break;
			}
			index_m++;
			ch--;
		}
	}
	int index=min(index_m,index_p);
	cout<<index;
	
	return 0;
}
