#include <iostream>
#include <vector>
using namespace std;
long long arr_sorted[500001];
vector<long long> arr;
long long result=0;
void Merge(int left,int mid,int right){
	int i=left;	int j=mid+1;	int k=left;
	while(i<=mid&&j<=right){
		if(arr[i]<=arr[j]) arr_sorted[k]=arr[i++];
		else{
			arr_sorted[k]=arr[j]; result+=j-k; j++;
		}
		k++;
	}
	if(i>mid){
		for(int t=j;t<=right;t++){
			arr_sorted[k++]=arr[t];
		}
	}else{
		for(int t=i;t<=mid;t++){
			arr_sorted[k++]=arr[t];
		}
	}
	for(int t=left;t<=right;t++){
		arr[t]=arr_sorted[t];
	}
}
void MergeSort(int left,int right){
	if(left>=right) return;
	int mid=(left+right)/2;
	MergeSort(left,mid);
	MergeSort(mid+1,right);
	Merge(left,mid,right);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		arr.push_back(index);
	}
	MergeSort(0,n-1);
	cout<<result;
	
	return 0;
}
