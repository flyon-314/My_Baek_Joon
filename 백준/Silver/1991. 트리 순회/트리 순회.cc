#include <iostream>
using namespace std;

int tree[2][50];

void preorder (int N) {
	if (N == -1) return;
	cout << (char)(N+'A');
	preorder(tree[0][N]);
	preorder(tree[1][N]);
}

void inorder (int N) {
	if (N == -1) return;
	inorder(tree[0][N]);
	cout << (char)(N+'A');
	inorder(tree[1][N]);
}

void postorder (int N) {
	if (N == -1) return;
	postorder(tree[0][N]);
	postorder(tree[1][N]);
	cout << (char)(N+'A');
}

int main() {
	int n;
	cin >> n;
	for (int i=0; i<n; i++) {
		char node, left, right;
		cin >> node >> left >> right;		
		node=node-'A';
		if (left == '.') {		
			tree[0][node] = -1;
		}
		else {
			tree[0][node] = left-'A';
		}
		if(right == '.') {
			tree[1][node] = -1;
		}
		else {
			tree[1][node] = right-'A';
		}
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	return 0;
}