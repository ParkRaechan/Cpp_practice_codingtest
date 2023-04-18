#include <iostream>

using namespace std;
long long get_sum(int x,int y){
	int sum=0;
	for(long long i=x;i<=y;i*=x){
		sum+=y/i;
	}
	return sum;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	long long five_sum=get_sum(5,n)-get_sum(5,m)-get_sum(5,(n-m));
	long long two_sum=get_sum(2,n)-get_sum(2,m)-get_sum(2,(n-m));

	cout<<min(five_sum,two_sum);
	
	return 0;
}
