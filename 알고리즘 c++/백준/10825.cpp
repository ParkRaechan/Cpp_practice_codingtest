#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
	string name;
	int korean;
	int english;
	int math;
}Student;
bool cmp(const Student& s1,const Student& s2){
	if(s1.korean==s2.korean){
		if(s1.english==s2.english){
			if(s1.math==s2.math){
				return s1.name<s2.name;
			}else{
				return s1.math>s2.math;
			}
		}else{
			return s1.english<s2.english;
		}
	}else{
		return s1.korean>s2.korean;
	}
}
int main(int argc, const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	Student* arr=new Student[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].name>>arr[i].korean>>arr[i].english>>arr[i].math;
	}
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++){
		cout<<arr[i].name<<"\n";
	}
	
	return 0;
}
