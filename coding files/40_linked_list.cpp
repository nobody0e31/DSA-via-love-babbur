#include<iostream>
using namespace std;

class Node{

public:
int data;
Node *next;

Node (int val){
    //constructor

    data = val;
    next = NULL;

}
};
class list {
    Node *head;
    Node *tail;
    public:
    list(){

        head = tail = NULL;

    }

    void push_front(int val){

        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
    }
};
int main(){

    list ll;
     return 0;
}