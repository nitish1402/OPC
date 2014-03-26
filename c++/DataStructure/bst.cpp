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


//A structure for Binary Search Tree
struct treeNode
{
	struct treeNode *left;
	int data;
	struct treeNode *right;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

using namespace std;


//Function for inserting element recusrively in BST
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
		}
		if(value>=(*treePtr)->data)
		{
			insertNode(&((*treePtr)->right),value);
		}
	}
}

//Function For copying a BST
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

//COPY more safe
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

//Tree Traversals
void Inorder( TreeNodePtr treePtr)
{
	if(treePtr != NULL)
	{
		Inorder(treePtr->left);
		printf("%d ",treePtr->data);
		Inorder(treePtr->right);
	}
}

//Zig-Zag Order Traversal
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


//Fuction For Getting Height Of the tree
int heightTree(TreeNodePtr treePtr)
{
	int left,right;
	if(treePtr==NULL)  return -1;
    else 
	{
		left=heightTree(treePtr->left);
		right=heightTree(treePtr->right);
		
		return 1+max(left,right);
	}
}

//Function for getting MinDepth	
int minDepth(TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	   return 0;
	else
	   return 1+min(minDepth(treePtr->left),minDepth(treePtr->right));

}

//Fucntion For getting MaxDepth	
int maxDepth(TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	   return 0;
	else
	   return 1+max(maxDepth(treePtr->left),maxDepth(treePtr->right));

}

//Function for checking balance tree
bool isBalanced(TreeNodePtr treePtr)
{
	return(maxDepth(treePtr)-minDepth(treePtr)<=1);
}

//Level Order Traversal
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

//Getting Difference Between the nodes at odd height and even Height		
int getLevelDiff(TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	    return 0;
	else
	    return treePtr->data-getLevelDiff(treePtr->left)-getLevelDiff(treePtr->right);
}

//This Function return the sum of children node of binary tree
int Getsum(TreeNodePtr treePtr)
{
	if(treePtr==NULL)  return 0;
	int left=0,right=0;
	if(treePtr->left!=NULL)
	{
		left=treePtr->left->data;
	}
	if(treePtr->right!=NULL)
	{
		right=treePtr->right->data;
	}
	
	return left+right+Getsum(treePtr->left)+Getsum(treePtr->right);
}

//This function changes a node value to the sum of its children values
void changeData(TreeNodePtr treePtr)
{
	if(treePtr==NULL)
	{
		return ;
	}
    TreeNodePtr temp=treePtr;
    
	int val=Getsum(temp);
	temp->data=val;
	if(temp->left!=NULL)  changeData(temp->left);
	if(temp->right!=NULL)  changeData(temp->right);
}

//changing tree with the sum of its children nodes
TreeNodePtr Change(TreeNodePtr *treePtr)
{
	TreeNodePtr temp=*treePtr;
	changeData(temp);
	return temp;
}

//This Function Gives the Maximu value of the path from one leaf to other
int GetLeafMaxSum(TreeNodePtr treePtr,int *maxsum)
{	
	if(treePtr==NULL)  return 0; //base condition
	
	if(treePtr->left==NULL && treePtr->right==NULL)
	{
		return treePtr->data;
	}
	
	int left=GetLeafMaxSum(treePtr->left,maxsum);
	int right=GetLeafMaxSum(treePtr->right,maxsum);
	
	int sumCurrentLevel=max(left,right)+treePtr->data;
	
	if(left+right+treePtr->data > *maxsum)
	{
		*maxsum=left+right+treePtr->data;
	}
	
	return sumCurrentLevel;
}

//Function that will return the tree node with its Mirror image
TreeNodePtr Mirror(TreeNodePtr rootPtr)
{
	if(rootPtr==NULL)
	{
		return NULL;
	}
	
	TreeNodePtr MirrorPtr=(TreeNodePtr)malloc(sizeof(TreeNodePtr));
	MirrorPtr->data=rootPtr->data;
	
	MirrorPtr->left=Mirror(rootPtr->right);
	MirrorPtr->right=Mirror(rootPtr->left);
	
	return MirrorPtr;
}


//The main function  	
int main()
{
	int t,i;
	int n;
	TreeNodePtr rootPtr=NULL;
	TreeNodePtr cp=NULL;
	TreeNodePtr cp1=NULL;
	srand(clock());
	cin>>n;
	FOR(i,n)
	{
		cin>>t;
		insertNode(&rootPtr,t);
	}
	Inorder(rootPtr);
	cout<<endl;
	cp=Mirror(rootPtr);
    Inorder(cp);
	int maxsum=0;
	int ans=GetLeafMaxSum(rootPtr,&maxsum);
	cout<<ans<<endl;
	return 0;
}
		
/**
 * Usage
	cout<<"Inorder Traversal"<<endl;
	Inorder(rootPtr);
	cout<<"Zig-Zagorder Traversal"<<endl;
	zigzagOrder(rootPtr);
	cout<<"Levelorder Traversal"<<endl;
	levelOrder(rootPtr);
	cout<<endl;
	cout<<heightTree(rootPtr)<<endl;
	copyTree(&cp,rootPtr);
	Inorder(cp);
	copyTree1(cp1,rootPtr);
	Inorder(cp1);
	cout<<"gjhf"<<getLevelDiff(rootPtr)<<endl;
	cout<<isBalanced(rootPtr)<<endl;
	//cout<<"success"<<endl;
	int ans=Getsum(rootPtr);
	cout<<ans<<endl;
	Change(&rootPtr);
	cout<<"Inorder Traversal"<<endl;
	Inorder(rootPtr);
	* */

