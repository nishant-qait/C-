#include <iostream>
using namespace std;
struct node{
	int data;
	node * next;
};
node* start = NULL;
node * getNode(int data){
	node * temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	return temp;
}
void insert(int data){
	node * temp1 = getNode(data);
	if(start==NULL)
	  start = temp1;
	 else{ 
	node * temp = start;
	while(temp->next!=NULL)
	  temp= temp->next;
	temp->next=temp1;  
	 }
}
void display(){
	node* temp =start;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
int main() {
	insert(1);
	insert(2);
	insert(31);
	insert(14);
	display();
	return 0;
}
