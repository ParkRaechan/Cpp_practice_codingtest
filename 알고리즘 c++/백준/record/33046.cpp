#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index1_1,index1_2; cin>>index1_1>>index1_2;
	int index2_1,index2_2; cin>>index2_1>>index2_2;
	int first_step=(index1_1+index1_2)%4;
	int second_step=first_step-1+(index2_1+index2_2);
	int result=second_step%4;
	if(result==0) result=4;
	cout<<result;
	
	return 0;
}
