#include <iostream>
#include <string>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string input,result;
    cin>>input;
    int leng=input.length(),i=0;
    if(leng%3==1){
        cout<<input[0];
        i=1;
    }
    else if(leng%3==2){
        cout<<((input[0]-'0')*2)+(input[1]-'0');
        i=2;
    }
    for (i;i<leng;i+=3){
        cout<<((input[i]-'0')*4)
		+((input[i+1]-'0')*2)+(input[i+2]-'0');
    }

    return 0;
}
