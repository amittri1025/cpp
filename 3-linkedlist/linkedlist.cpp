#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    Node(int data, Node* next){
        this -> data = data;
        this -> next = next;
    }
};


int main(){ 

    Node* node1 = new Node(5, NULL);
    Node* node2 = new Node(6, NULL);
    cout<<node1 ->data <<endl;
    cout<<node1 ->next <<endl;

    return 0;   
}