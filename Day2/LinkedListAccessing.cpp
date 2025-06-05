#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
public:
    int data;
    Node *next;
  //Constructor
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* convertArrtoLinkedList(vector<int>&arr){
     Node* head = new Node(arr[0]);
     Node* mover = head;
     for (int i = 1;i<arr.size();i++){
         Node* temp = new Node(arr[i]);
         mover->next = temp;
         mover = temp;
     }
     return head;
 }

int main()
{
   vector<int>arr = {1,2,3,4,5};
   Node* head = convertArrtoLinkedList(arr);
   
   
 
}
