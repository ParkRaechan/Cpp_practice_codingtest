#include <stdio.h>
#include <math.h> 

int a[100001];

void primeNumberSeive(int number){
	for(int i=2;i<=number;i++){
		a[i]=i;
	}
	for(int i=2;i<=number;i++){
		if(a[i]==0) continue;
		for(int j=i+i;j<=number;j+=i){
			a[j]=0;
		}
	}
	for(int i=0;i<=number;i++){
		if(a[i]!=0) printf("%d\n",a[i]);
	}
}

int main(void){
	primeNumberSeive(71);
	return 0;
}
