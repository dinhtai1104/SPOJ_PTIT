#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
struct Node {
	int data;
	Node *pNext;
	Node() {
		data = 0;
		pNext = NULL;
	}
};
 
struct List {
	Node *pHead;
	Node *pTail;
	List() {
		pHead = pTail = NULL;
	}
};
typedef List Tree;	
 
Node* creatNode(int data) {
	Node *x = new Node();
	x->data = data;
	return x;
}
 
void addNode(Node* p, Tree &tree) {
	if (tree.pHead == NULL) {
		tree.pHead = tree.pTail = p;
		return;
	}
	tree.pTail->pNext = p;
	tree.pTail = p;
}
 
int deleteNode_1(Tree &tree) {
	int data = tree.pHead->data;
	tree.pHead = tree.pHead->pNext;
	return data;
}
int deleteNode_2(Tree &tree) {
	int data = tree.pHead->pNext->data;
	tree.pHead->pNext = tree.pHead->pNext->pNext;
	return data;
}
void swap(Tree &tree) {
	swap(tree.pHead->data, tree.pHead->pNext->data);
}
void swap2(Tree &tree) {
	swap(tree.pHead->data, tree.pTail->data);
}
void solve(){
	Tree tree;
//	int n;
//	cin>>n;
//	for(int i=0;i<6;i++){
//		addNode(creatNode(i), tree);
//	}
//	
//	for (Node *k = tree.pHead; k != NULL; k = k->pNext) {
//		cout << k->data << ' ';
//	}
//	cout << endl;
//	deleteNode_2(tree);
//	for (Node *k = tree.pHead; k != NULL; k = k->pNext) {
//		cout << k->data << ' ';
//	}
	int n, m;
	string s;
	cin>>n>>m;
	getline(cin, s, '.');
	s.erase(0,1);
//	cout<<s<<endl;
	
	for (int i = 0; i < n; i++) {
		addNode(creatNode(i), tree);
//	}
//	for (Node *k = tree.pHead; k != NULL; k = k->pNext) {
//		cout << k->data <<' ';
	}
//	cout<<endl;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]=='A'){
			int data = deleteNode_1(tree);
			addNode(creatNode(data), tree);
		} else {
			int data = deleteNode_2(tree);
			addNode(creatNode(data), tree);
		}
//		for (Node *k = tree.pHead; k != NULL; k = k->pNext) {
//			cout << k->data <<' ';
//		}
//		cout<<endl;
	}
	vector<int> res;
	int x = 0;
	for (Node *k = tree.pHead; k != NULL; k = k->pNext) {
		if (x == m - 1) {
			res.push_back(k->data);
		}
		if (x == m) {
			res.push_back(k->data);
		}
		if (x == m + 1) {
			res.push_back(k->data);
		}
		x++;
	}
	cout<<res[0] << ' ' << res[1] << ' ' << res[2];
}
int main(){
	ios_base::sync_with_stdio(0);
	int t=1;
//	cin >> t;
	cin.tie(0);
	cout.tie(0);
	while(t--) {
		solve();
	}
 
	return 0;
}
 
 
