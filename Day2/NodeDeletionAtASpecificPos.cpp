#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
public:

    int data;
    Node* next;
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//Creating a linked list from the array
Node* convertArr2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//Reversal of linked list
Node* reverseLinkedList(vector<int>&arr){
    int n = arr.size();
    Node* tail = new Node(arr[arr.size()-1]);
    Node* mover = tail;
    for (int i= n;i>=0;i--){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover= temp;
    }
    return tail;
}
//Length of the Linked List
int lengthOfLL(Node* head){
    int count = 0;
    Node* temp =  head;
    while (temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    return count;
}
//Binary search
int searchForElement(Node* head,int target){
    Node* temp = head;
    while (temp!=nullptr){
        if (temp->data == target){
                return 1;
        }
        temp = temp->next;
    }
    return 0;
}

//Deleting Head Node
Node * delHead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}


//Deleting last Node
Node* delLastNode(Node* head){
    if (head==NULL){
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    
    return head;
}

//Time complexity of Traversal in linked list : O(n)
//Traversal of a linked list
int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr);
    Node* temp = head;
    while (temp !=nullptr){
        cout<<temp->data;
        temp = temp->next;
        
    }
    
    Node* tail = reverseLinkedList(arr);
    cout<<tail->data<<"\n";
    int count = lengthOfLL(head);
    cout<<"The length of the linked list"<<count;
    int ans = searchForElement(head,66);
    cout<<ans<<"\n";
    Node* newHead = delHead(head);
    cout<<newHead<<"\n";
    cout<<delLastNode(head);
    tail = delLastNode(head);
    Node* trav = head;
    while (trav!=nullptr){
        cout<<trav->data;
        trav=trav->next;
    }
}
    
