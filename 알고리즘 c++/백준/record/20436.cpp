#include <iostream>

using namespace std;
char arr[4][11];
int wx,wy;
int Absolute(int d){
	if(d<0) return -d;
	return d;
}
void Solve(char c){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=10;j++){
			if(arr[i][j]==c){
				wx=i;wy=j;
				return;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	arr[1][1]='q';arr[1][2]='w';arr[1][3]='e';arr[1][4]='r';arr[1][5]='t';
	arr[1][6]='y';arr[1][7]='u';arr[1][8]='i';arr[1][9]='o';arr[1][10]='p';
	
	arr[2][1]='a';arr[2][2]='s';arr[2][3]='d';arr[2][4]='f';arr[2][5]='g';
	arr[2][6]='h';arr[2][7]='j';arr[2][8]='k';arr[2][9]='l';
	
	arr[3][1]='z';arr[3][2]='x';arr[3][3]='c';arr[3][4]='v';arr[3][5]='b';
	arr[3][6]='n';arr[3][7]='m';
	
	char sl,sr; cin>>sl>>sr;
	string s; cin>>s;
	
	Solve(sl);
	int lx=wx,ly=wy;
	Solve(sr);
	int rx=wx,ry=wy;
	
	int sum=0;
	for(int i=0;i<s.length();i++){
		Solve(s[i]);
		if(s[i]=='q'||s[i]=='w'||s[i]=='e'||s[i]=='r'||s[i]=='t'||
		s[i]=='a'||s[i]=='s'||s[i]=='d'||s[i]=='f'||s[i]=='g'||
		s[i]=='z'||s[i]=='x'||s[i]=='c'||s[i]=='v'){
			sum+=Absolute(lx-wx)+Absolute(ly-wy);
			lx=wx; ly=wy;
			sum++;
		}else{
			sum+=Absolute(rx-wx)+Absolute(ry-wy);
			rx=wx; ry=wy;
			sum++;
		}
	}
	cout<<sum;
	
	return 0;
}
