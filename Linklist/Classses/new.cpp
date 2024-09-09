#include <iostream>
using namespace std;

class Node {
  public:
  int data ;
  Node *next;
  
  Node(){
    this->next=NULL;
  }

  Node(int data){
    this->data=data;
    this->next=NULL;
  };
};



void print_linklist(Node* head){
  Node* temp = head;

  while(temp!=NULL){
    cout<<temp->data<< "->";
    temp = temp->next;
  }
};


void insert_atHead( Node* &head,int data){


  Node* newNode = new Node(data);

  newNode->next = head;
  head = newNode;
};
void insert_atTail( Node* &head, Node* &tail, int data){


  Node* newNode = new Node(data);
  newNode->next = NULL;

  tail->next = newNode;
  tail = newNode;
};

void insert_atanyPossiton(Node* &head, Node* &tail, int post,int data){

  if(post<=1){
    insert_atHead(head,data);
  }
  else if(post>3){
    insert_atTail(head,tail,data);
  }
  else{

    Node* newNode = new Node(data);

    Node* pre = NULL;
    Node* curr = head;

    while(post !=1){
      pre = curr;
      curr= curr->next;
      post--;

    }

    pre->next = newNode;
    newNode -> next = curr;
  }
};

int main() {
  cout << "Hello world!" << endl;

  Node* fist = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);

  fist->next = second;
  second->next =third;
  Node* head = fist;
  Node* tail = third;

print_linklist(head);


  

  cout<<endl;

  // cout<<"After the insertion of Node"<<endl;

  // insert_atHead(head,5);

  // print_linklist(head);
  // cout<<endl;

  // cout<<"After the insertion at tail of Node"<<endl;
  

  // insert_atTail(head,tail,5);

  // print_linklist(head);
    

cout<<endl;
cout<<"After the insertion at tail of Node"<<endl;
  insert_atanyPossiton(head,tail,2,67);
print_linklist(head);
  return 0;
}