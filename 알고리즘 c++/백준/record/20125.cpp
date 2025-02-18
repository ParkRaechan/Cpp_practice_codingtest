#include <iostream>

using namespace std;
char arr[1001][1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	
	//heart
	int heart_x,heart_y;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]=='*'){
				if(arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j-1]=='*'&&arr[i][j+1]=='*'){
					heart_x=i,heart_y=j;
				}
			}
		}
	}
	
	//arm
	int left_arm=1,l_a_x=heart_x,l_a_y=heart_y-1;
	while(1){
		if(l_a_y-1>=1){
			if(arr[l_a_x][l_a_y-1]=='*'){
				l_a_y-=1;
				left_arm++;
			}else break;
		}else break;
	}
	int right_arm=1,r_a_x=heart_x,r_a_y=heart_y+1;
	while(1){
		if(r_a_y+1<=1000){
			if(arr[r_a_x][r_a_y+1]=='*'){
				r_a_y+=1;
				right_arm++;
			}else break;
		}else break;
	}
	
	//waist
	int waist=1,wa_x=heart_x+1,wa_y=heart_y;
	while(1){
		if(wa_x+1<=999){
			if(arr[wa_x+1][wa_y]=='*'){
				wa_x+=1;
				waist++;
			}else break;
		}else break;
	}
	
	//leg
	int left_leg=1,l_l_x=wa_x+1,l_l_y=wa_y-1;
	while(1){
		if(l_l_x+1<=1000){
			if(arr[l_l_x+1][l_l_y]=='*'){
				l_l_x+=1;
				left_leg++;
			}else break;
		}else break;
	}
	int right_leg=1,r_l_x=wa_x+1,r_l_y=wa_y+1;
	while(1){
		if(r_l_x+1<=1000){
			if(arr[r_l_x+1][r_l_y]=='*'){
				r_l_x+=1;
				right_leg++;
			}else break;
		}else break;
	}
	cout<<heart_x<<" "<<heart_y<<"\n";
	cout<<left_arm<<" "<<right_arm<<" "<<waist<<" "<<left_leg<<" "<<right_leg;
	
	return 0;
}
