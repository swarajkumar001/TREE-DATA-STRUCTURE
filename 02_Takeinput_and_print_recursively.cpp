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
    
    TreeNode<int>* takeInput(){
    	int rootdata;
    	cout<<" enter the data"<<endl;
    	cin>>rootdata;
    	TreeNode<int> *root=new TreeNode<int>(rootdata);
    	
    	int n;
    	cout<<" Enter the children of = "<<rootdata<<endl;
    	cin>>n;
    	for(int i=0;i<n;i++){
    		TreeNode<int> *child=takeInput();
    		root->children.push_back(child);
    		
		}
		return root;
    	
	}
    
    

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
	
	
	TreeNode<int> *root=takeInput();
		PrintTree(root);
}
