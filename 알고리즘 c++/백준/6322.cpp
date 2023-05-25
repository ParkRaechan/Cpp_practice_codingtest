#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	
	int index=1;
	while(1){
		double a,b,c;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0){
			break;
		}else if((a>=c||b>=c)&&c!=-1){
			printf("Triangle #%d\nImpossible.\n\n",index);
		}
		else if(a==-1){
			a=sqrt(c*c-b*b);
			printf("Triangle #%d\na = %.3lf\n\n",index,a);
		}else if(b==-1){
			b=sqrt(c*c-a*a);
			printf("Triangle #%d\nb = %.3lf\n\n",index,b);
		}
		else if(c==-1){
			c=sqrt(a*a+b*b);
			printf("Triangle #%d\nc = %.3lf\n\n",index,c);
		}
		index++;
	}
	
	return 0;
}
