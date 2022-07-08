#include <iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
};
class Queue{
	Node* head;
	Node* tail;
	int n;
 
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		head = NULL;
		tail = NULL;
		n=0;
		cout<<"constructor is Called\n";
	}
 
	//push the value at the back
	void push(int value){
		Node* new_node = new Node();
		new_node->val = value;
		if(head==NULL){
			head = new_node;
			tail = new_node;
		}
		else{
			tail->next = new_node;
			tail = new_node;
		}
		n++;
		
		cout<<"pushing the val: "<<value<<" at the back of queue\n";
	}
 
	int front(){
		if(head!=NULL){
			return head->val;
		}
		else
			cout<<"queue is empty so returning 0\n";
		return 0;
	}
 
	void pop(){
		if(head!=NULL){
			head=head->next;
			n--;
		}
		cout<<"queue is empty, can't pop\n";
	}
 
	int size(){
		cout<<"return the size of the queue\n";
		return n;
		
	}
 
	bool isEmpty(){
		if(!head){
			return true;
		}
		cout<<"returning if the queue is empty\n";
		return false;
	}
};
 
int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
 
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	cout<<"front error: "<<q.front()<<"\n";
	return 0;
}
