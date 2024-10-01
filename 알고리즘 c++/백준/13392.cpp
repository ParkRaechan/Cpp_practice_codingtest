#include <iostream>

using namespace std;
int N;
int dp[10001][11];
int a1[10001];
int a2[10001];
int Solve(int d,int turn){
	if(dp[d][turn]!=0) return dp[d][turn];
	
	if(d==N) return 0;
	
	int turn_le=(a2[d]-a1[d]-turn+20)%10;
	int turn_ri=10-turn_le;
	return dp[d][turn]=min(Solve(d+1,(turn+turn_le)%10)+turn_le,Solve(d+1,turn)+turn_ri);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		a1[i]=s1[i]-'0';
		a2[i]=s2[i]-'0';
	}
	cout<<Solve(0,0);
	
	return 0;
}
