#include<stdio.h>

struct node{
	int info;
	node* left, * right;
}

int init(node*& root, int left, int right);
int find(node* root, int k);

int a[1000000];
void main()
{
	int n, s, k;
	scanf("%d%d", &n, &s);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	
	node* root;
	init(root, 0, n - 1);
	
	for(int i = 0; i < s; i++)
	{
		scanf("%d", &k);
		printf("%d\n", find(root, k));
	}
}

int find(node* root, int k)
{
	if(root->info < k)
		return -1;
	
	if(root->left == nullptr)
		return root->info;
	else if(root->left->info >= k)
		return find(root->left, k);
	else
		return find(root->right, k);
}

int init(node*& root, int left, int right)
{
	root = new node;
	
	if(left == right){
		root->info = a[left];
		root->left = root->right = nullptr;
		return;
	}
	
	int mid = (left + right) / 2;
	int leftChild = init(root->left, left, mid);
	int rightChild = init(root->right, mid + 1, right);
	root->info = leftChild >= rightChild  leftChild : rightChild;
}
