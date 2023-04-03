#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	int age;
	string name;
	int order_index;
}Position;
bool cmp(const Position& p1,const Position& p2){
	if(p1.age==p2.age){
		return p1.order_index<p2.order_index;
	}else{
		return p1.age<p2.age;
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	Position* arr=new Position[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].age>>arr[i].name;
		arr[i].order_index=i+1;
	}
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++){
		cout<<arr[i].age<<" "<<arr[i].name<<"\n";
	}
	
	return 0;
}
