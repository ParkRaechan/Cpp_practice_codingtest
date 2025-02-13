#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	string b; int n;
    cin>>b>>n;

    int sum(0);
	for (int i=0;i<b.length();i++){
		int index=b[b.length()-(i + 1)];
		if('0'<=index&&index<='9'){
    		index=index-'0';
    	}else{
            index=index+10-'A';
    	}
    	sum+=(index*(int)pow(n, i));
	}
    cout<<sum;

    return 0;
}
