#include <iostream>
#include <vector>
using namespace std;

template <typename T>

class TreeNode{
	public:
		T data;
		vector<TreeNode*> children;
		
		TreeNode( T data){
			this->data=data;
			
		}
	
};


void PrintTree(TreeNode<int> * root){
	if(root==NULL){ // JUST TO HANDLE EDGE CASE ........
		return ;
	}
	
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		PrintTree(root->children[i]);
	}
	
	
}

int main(){
	
	TreeNode<int> *root=new TreeNode<int>(1);
	TreeNode<int> *node1=new TreeNode<int>(2);
	TreeNode<int> *node2=new TreeNode<int>(3);
	TreeNode<int> *node3=new TreeNode<int>(4);
	TreeNode<int> *node4=new TreeNode<int>(5);
	TreeNode<int> *node5=new TreeNode<int>(6);
	
	
	root->children.push_back(node1);
	root->children.push_back(node2);
	root->children.push_back(node3);
	root->children.push_back(node4);
	root->children.push_back(node5);
	
		PrintTree(root);
		

	
	
}
