#include <iostream>

using namespace std;
typedef struct node{
	char left;
	char right;
}Node;
Node arr[27];
void preorder(char root) {		//PreOrder: root - left child - right child
	if (root=='.') return ;
	cout<<root;
	preorder(arr[root].left);
	preorder(arr[root].right);
}
void inorder(char root) {		//InOrder: left child - root- right child
	if (root=='.') return ;
	inorder(arr[root].left);
	cout<<root;
	inorder(arr[root].right);
}
void postorder(char root) {		//PostOrder: left child - right child - root
	if (root=='.') return ;
	postorder(arr[root].left);
	postorder(arr[root].right);
	cout<<root;
}

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	char putindex_1,putindex_2,putindex_3;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>putindex_1>>putindex_2>>putindex_3;
		arr[putindex_1].left=putindex_2;
		arr[putindex_1].right=putindex_3;
	}
	preorder('A');
	cout<<"\n";
	inorder('A');
	cout<<"\n";
	postorder('A');
	
	return 0;
}
