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

//reversal of linked list
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
    cout<<tail->data;

}
