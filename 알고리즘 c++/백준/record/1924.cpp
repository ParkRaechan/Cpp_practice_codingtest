#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	string week[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	
	cin>>a>>b;
	int total,d;
	total=b;
	d=a-2;
	for(int i=0;i<=d;i++){
		total+=c[i];
	}
	cout<<week[total%7];
	
	return 0;
}
