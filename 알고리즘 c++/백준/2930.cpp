#include <iostream>

using namespace std;
string arr_s[51];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int r;cin>>r;
	string s;cin>>s;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr_s[i];
	}
	int result_1=0,result_2=0;
	for(int i=0;i<r;i++){
		int S=0,P=0,R=0;
		if(s[i]=='S'){
			for(int j=0;j<n;j++){
				if(arr_s[j][i]=='S'){
					result_1++;
					S++;
				}
				else if(arr_s[j][i]=='P'){
					result_1+=2;
					P++;
				}
				else R++;
			}
		}else if(s[i]=='P'){
			for(int j=0;j<n;j++){
				if(arr_s[j][i]=='P'){
					result_1++;
					P++;
				}
				else if(arr_s[j][i]=='R'){
					result_1+=2;
					R++;
				}
				else S++;
			}
		}else if(s[i]=='R'){
			for(int j=0;j<n;j++){
				if(arr_s[j][i]=='R'){
					result_1++;
					R++;
				}
				else if(arr_s[j][i]=='S'){
					result_1+=2;
					S++;
				}
				else P++;
			}
		}
		int r1=P*2+S,r2=R*2+P,r3=S*2+R;
		result_2+=max(r1,max(r2,r3));
	}
	
	cout<<result_1<<"\n"<<result_2;
	
	return 0;
}
