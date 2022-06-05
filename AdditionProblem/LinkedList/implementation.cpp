#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;
};

void printList(node* root){
    while(root){
        cout<<root->val<<"->";
        root = root->next;
    }
    cout<<"NULL -->|";
    return;
}

node* takeInput(int n){
    // Creating temp node for traversal and connecting the nodes , initially it has garbage value
    node* temp = new node;

    // head node that has to maintained
    node* head  = temp;
    while(n--){
        int data;
        cin>>data;

        // creating new node from user input
        node* input = new node;
        input->val = data;

        // link the node to the temp node
        temp->next = input;

        //increament the temp to the next
        temp = temp->next;
    }
    //after traversing mark the next pointer of temp to nullptr
    temp->next = NULL;

    // intially head pointing to temp , and it contains the garbage value hence return head->next
    return head->next;

}


int main() {

    // Creating the head Node ----- and initialising list by taking new node 
    node* head = new node;
    
    
    // Value of head node and no need to point the pointer anywhere if we want to link more nodes to it
    head->val = 0;
    
    // New Node n1
    node* n1 = new node;
    n1->val = 1;
    
    // After creating new node we can connect our head node to this newly created node
    head->next = n1;
    
    node* n2  = new node;
    n2->val = 2;
    
    n1->next = n2;

    // last node next point should points to NULL
    n2->next = NULL;
   
    // Printing The list
    printList(head);
    cout<<endl;
   

    //    Take Input from User function
    int n;
    cin>>n;

    node* headUser = takeInput(n);
     
    // print the list
    printList(headUser);


}