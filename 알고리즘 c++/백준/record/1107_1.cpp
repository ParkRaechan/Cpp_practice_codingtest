#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<bool> v(10,false);
bool check(int now){
    string s=to_string(now);
    for(int i=0;i<s.length();i++){
        if(v[s[i]-48]){
            return false;
        }
    }
    return true;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,c;	cin>>n>>c;
    int index;
    for(int i = 0; i < c; i++){
        cin>>index;
        v[index]=true;
    }
    
    int m=abs(n-100);
    for(int i=0;i<=1000000;i++){
        if(check(i)){
            int tmp=abs(n-i)+to_string(i).length();
            m=min(m,tmp);
        }
    }
    cout<<m<<endl;
	
    return 0;
}
