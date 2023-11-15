#include <iostream>

using namespace std;
struct Thing{
    int weight, val;
};
int value[101][100001], n, k;
Thing thing[101];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    cin>>n>>k;  
  	for(int i=1;i<=n;i++){
        int w,v;
        cin>>w>>v;
        thing[i]={w, v};
    }
  	for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            int wi=thing[i].weight;
            int vi=thing[i].val;
  			
            if(wi>j) value[i][j]=value[i-1][j];
  			else value[i][j]=max(value[i-1][j],vi+value[i-1][j-wi]);
        }
    }
    cout<<value[n][k];
    
    return 0;
}
