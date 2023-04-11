#include <iostream>

using namespace std;
int arr[27];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s1,s2; int index=0;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		arr[s1[i]-'A']++;
	}
	for(int i=0;i<s2.length();i++){
		if(arr[s2[i]-'A']!=0){
			index++; arr[s2[i]-'A']--;
		}
	}
	cout<<index;
	
	return 0;
}
