#include <iostream>
#include <cmath>
using namespace std;
int visited[300001];
void search(int num,int p){
	visited[num]++;
	if(visited[num]==3) return;
	int sum=0;
	while(num!=0){
		sum+=(int)pow((num%10),p);
		num/=10;
	}
	search(sum,p);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,p,result=0;
	cin>>a>>p;
	search(a,p);
	for(int i=1;i<=300000;i++){
		if(visited[i]==1) result++;
	}
	cout<<result;
		
	return 0;
}
