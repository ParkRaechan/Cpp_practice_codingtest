#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index_3,index_4,index_0; cin>>index_3>>index_4>>index_0;
	int index3=index_3,index4=index_4+index_0;
	bool result=false;
	int result1,result2;
	while(index4>=index_4){
		if(index3%3==0&&index4%4==0){
			result=true;
			result1=index3/3; result2=index4/4;
			break;
		}
		index3++; index4--;
	}
	if(result) cout<<result1<<" "<<result2;
	else cout<<"-1";
	
	return 0;
}
