#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int king,queen,rook,bishop,knight,pawn;
	cin>>king>>queen>>rook>>bishop>>knight>>pawn;
	cout<<1-king<<" "<<1-queen<<" "<<2-rook<<" "<<2-bishop<<" "<<2-knight<<" "<<8-pawn;
	
	return 0;
}
