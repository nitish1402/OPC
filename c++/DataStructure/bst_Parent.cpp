#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <complex>
#include <vector>
#include <cmath>
#include <ctime>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

struct treeNode
{
	struct treeNode *left;
	int data;
	struct treeNode *right;
	struct treeNode *parent;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

using namespace std;



void insertNode(TreeNodePtr *treePtr,int value)
{
	if(*treePtr== NULL)
	{
		*treePtr=(TreeNodePtr)malloc(sizeof(TreeNode));
		if(*treePtr != NULL)
		{
			(*treePtr)->data=value;
			(*treePtr)->left=NULL;
			(*treePtr)->right=NULL;
			(*treePtr)->parent=NULL;
			
		}
		
		else 
		{
		//	cout<<"Memory is not available "<<endl;
		}
	}
	
	else
	{
		if(value<(*treePtr)->data)
		{
			insertNode(&((*treePtr)->left),value);
			(*treePtr)->left->parent=*treePtr;
			
		}
		if(value>=(*treePtr)->data)
		{
			insertNode(&((*treePtr)->right),value);
			(*treePtr)->right->parent=*treePtr;
		}
	}
}

void copyTree(TreeNodePtr *copy,TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	{
		*copy=NULL;
	}
	else
	{
		*copy=(TreeNodePtr) malloc(sizeof(TreeNodePtr));
		(*copy)->data=treePtr->data;
		copyTree(&((*copy)->left),treePtr->left);
		copyTree(&((*copy)->right),treePtr->right);
	}
}

void copyTree1(TreeNodePtr & copy,TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	{
		copy=NULL;
	}
	else
	{
		copy=(TreeNodePtr) malloc(sizeof(TreeNodePtr));
		copy->data=treePtr->data;
		copyTree(&copy->left,treePtr->left);
		copyTree(&copy->right,treePtr->right);
	}
}

void Inorder( TreeNodePtr treePtr)
{
	if(treePtr != NULL)
	{
		Inorder(treePtr->left);
		if(treePtr->parent!=NULL)
		printf("%d->%d\n",treePtr->data,treePtr->parent->data);
		else printf("%d **\n",treePtr->data);
		Inorder(treePtr->right);
	}
}

void zigzagOrder(TreeNodePtr treePtr)
{
	stack<TreeNodePtr> s1,s2;
	TreeNodePtr cur1,cur2;
	s1.push(treePtr);
	do
	{
		while(!s1.empty())
		{
			cur1=s1.top();
			s1.pop();
			cout<<cur1->data<<" ";
			if(cur1->left!=NULL)
			  s2.push(cur1->left);
			if(cur1->right!=NULL)  
			  s2.push(cur1->right);
		}
		while(!s2.empty())
		{
			cur2=s2.top();
			s2.pop();
			cout<<cur2->data<<" ";
			if(cur2->right!=NULL)
			   s1.push(cur2->right);
			if(cur2->left!=NULL)
			  s1.push(cur2->left);
		}
	}
	while(!s1.empty()||!s2.empty());
}



int heightTree(TreeNodePtr treePtr)
{
	int left,right;
	if(treePtr==NULL)  return -1;
    else if(treePtr!=NULL)
	{
		left=heightTree(treePtr->left);
		right=heightTree(treePtr->right);
		
		return 1+max(left,right);
	}
}
	

void levelOrder(TreeNodePtr treePtr)
{
	queue<TreeNodePtr> Q;
	TreeNodePtr cur;
	Q.push(treePtr);
	while(!Q.empty())
	{
		cur=Q.front();
		Q.pop();
		cout<<cur->data<<" ";
		if(cur->left!=NULL)
		{
			Q.push(cur->left);
		}
		if(cur->right!=NULL)
		{
			Q.push(cur->right);
		}
	}
}
		
	
int main()
{
	int t,i;
	int n;
	TreeNodePtr rootPtr=NULL;
	TreeNodePtr cp=NULL;
	TreeNodePtr cp1=NULL;
	//int k=5;
	//cout<<k<<" "<<(k<<1)<<" "<<(k>>1)<<endl;
	srand(clock());
	cin>>n;
	FOR(i,n)
	{
		cin>>t;
		insertNode(&rootPtr,t);
	}
	
	cout<<"Inorder Traversal"<<endl;
	Inorder(rootPtr);
	/*cout<<"Zig-Zagorder Traversal"<<endl;
	zigzagOrder(rootPtr);
	cout<<"Levelorder Traversal"<<endl;
	levelOrder(rootPtr);
	cout<<endl;
	cout<<heightTree(rootPtr)<<endl;
	*/
	
	//cout<<"success"<<endl;
	return 0;
}
		

