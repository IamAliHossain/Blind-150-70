/*
    Problem Link : https://leetcode.com/problems/reverse-linked-list/description/
    Problem Num  : 206
    Problem Diff : Easy
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}
Node* reverseLL(Node* head){
    if(head == NULL or head->next == NULL){
        return head;
    }
    Node* newHead = reverseLL(head->next); // 7
    Node* front = head->next;
    return front;
}
int main(){
    vector<int> arr={4, 2, 5, 1, 7};
    Node* head = convertArray2LL(arr);
    head = reverseLL(head);
    printLL(head);
}