#include <iostream>
#include <string>
using namespace std;
 
int main(int args,const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    string str[100];
    for(int i=0;i<100;i++){
        getline(cin, str[i]);
        if (str[i]=="")
            break;
        cout << str[i] << endl;
    }
    return 0;
}
