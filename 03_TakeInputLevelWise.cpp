#include <iostream>
#include <vector>
#include <queue>
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


TreeNode<int>* takeInputLevelwise(){
	int rootdata;
    	cout<<" enter the root data"<<endl;
    	cin>>rootdata;
    	TreeNode<int> *root=new TreeNode<int>(rootdata);
    	
    	queue<TreeNode<int>*> pendingnodes;
    	pendingnodes.push(root);
    	
    	while(pendingnodes.size()!=0){
    		TreeNode<int> *front=pendingnodes.front();
    		
    		pendingnodes.pop();
    		
    		
    		cout<<" Enter the no. of children of "<< front->data <<endl;
    		int n;
    		cin>>n;
    		for(int i=0;i<n;i++){
    			int childdata;
    			cout<<" enter the "<<i<<" th child of "<< front->data <<endl;
    			cin>>childdata;
    			TreeNode<int> *child=new TreeNode<int>(childdata);
    			front->children.push_back(child);
    			pendingnodes.push(child);
			}
    		
    		
    		
    		
		}
		return root;
    	
}


    
    /*TreeNode<int>* takeInput(){
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
    	
	}*/
    
    

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
	
	
	TreeNode<int> *root=takeInputLevelwise();
		PrintTree(root);
}
