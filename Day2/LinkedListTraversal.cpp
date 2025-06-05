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

}
