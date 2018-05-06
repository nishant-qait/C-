    #include <bits/stdc++.h>
    using namespace std;
    struct node{
    	int data;
    	node* left;
    	node* right;
    };
    node* getNode(int data){
    	node* temp = (node*)malloc(sizeof(node));
    	temp->data = data;
    	temp->left = temp->right = NULL;
    	return temp;
    }
    node* insert(node* root,int data){
    	if(root == NULL)
    		root = getNode(data);
    	else
    	 if(data<= root->data)
    		root->left = insert(root->left,data);
    	else
    	 if(data> root->data)
    		root->right = insert(root->right,data);
    	return root;	
    }
    bool search(node* root,int data){
    	if(root==NULL) return false;
    	if(data == root->data) return true;
    	else
    	if(data<= root->data) return search(root->left,data);
    	else
    	 if(data> root->data) return search(root->right,data);
    }
    int min(node *root){
    	if(root==NULL)
    	  return -1;
    	node *temp = root;
    	while(temp->left!=NULL)
    		temp=temp->left;
    	return temp->data;	
    }
    int max(node *root){
    	if(root==NULL)
    	  return -1;
    	node *temp = root;
    	while(temp->right!=NULL)
    		temp=temp->right;
    	return temp->data;	
    }
    int height(node* root){
    	if(root==NULL)
    	return -1;
    	int lh = height(root->left);
    	int rh = height(root->right);
    	return max(lh,rh)+1;
    }
    int main() {
    	node* root = NULL;
    	root = insert(root,15);
    	root = insert(root,10);
    	root = insert(root,20);
    	root = insert(root,25);
    	root = insert(root,8);
    	root = insert(root,12);
    	cout<<search(root,15)<<"\n";
    	cout<<min(root)<<"\n";
    	cout<<max(root)<<"\n";
    	cout<<height(root)<<"\n";
    	return 0;
    }
