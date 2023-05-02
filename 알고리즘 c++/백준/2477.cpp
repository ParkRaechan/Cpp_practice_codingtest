#include <iostream>
#include <vector>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int model,
	index_1,index_2,
	pre_index_1,pre_index_2,
	index_1_front,index_2_front,
	index_1_box,index_2_box;
	long long small_ar,big_ar,big_ar_1=0,big_ar_2=0;
	bool nex=false;
	
	cin>>model;
	vector<int> vect[5];
	int number=6;
	while(number--){
		cin>>index_1>>index_2;
		if(number==5){
			index_1_front=index_1;index_2_front=index_2;
		}
		if(number!=5&&nex==false){
			if((index_1==1&&pre_index_1==4)||(index_1==2&&pre_index_1==3)
			||(index_1==3&&pre_index_1==1)||(index_1==4&&pre_index_1==2)){
				small_ar=index_2*pre_index_2;
				nex=true;
			}
		}
		if(number==0&&nex==false){
			index_1_box=pre_index_1;index_2_box=pre_index_2;
			pre_index_1=index_1;pre_index_2=index_2;
			index_1=index_1_front;index_2=index_2_front;
			if((index_1==1&&pre_index_1==4)||(index_1==2&&pre_index_1==3)
			||(index_1==3&&pre_index_1==1)||(index_1==4&&pre_index_1==2)){
				small_ar=index_2*pre_index_2;
				nex=true;
			}
			index_1=pre_index_1;index_2=pre_index_2;
			pre_index_1=index_1_box;pre_index_2=index_2_box;
		}
		
		vect[index_1].push_back(index_2);
		pre_index_1=index_1; pre_index_2=index_2;
	}
	for(int i=1;i<=4;i++){
		if(vect[i].size()==1){
			if(big_ar_1==0){
				big_ar_1=vect[i][0];
			}else{
				big_ar_2=vect[i][0];
			}
		}
	}
	big_ar=big_ar_1*big_ar_2;
	cout<<(model*(big_ar-small_ar));
	
	return 0;
}
