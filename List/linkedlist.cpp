#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int val){
            data=val;
            next=NULL;
        }

};

class List{
    public:
        Node* head;
        Node* tail;
        List(){
            head=tail=NULL;
        }
    void push_front(int val){
        Node *newnode=new Node(val);
        if (head == NULL)
        {
           head=tail=newnode;
           return;
        }   
        newnode->next=head;
        head=newnode;
    }

     void push_back(int val){
        Node *newnode=new Node(val);
        if (head == NULL)
        {
           head=tail=newnode;
           return;
        }   
        tail->next=newnode;
        tail=newnode;
    }
    void pop_front(){
        Node *temp=head;
        if (head == NULL)
        {
           cout << "list is empty";
           return;
        }   
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

     void pop_back(){
        Node *temp=head;
        if (head == NULL)
        {
           cout << "list is empty";
           return;
        }   
        while (temp->next != tail)
        {
            temp=temp->next;
        }

        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    void insert(int val,int pos){
        if (pos < 0)
        {
         cout<<"daikh kar pos enter karo .pagal!!";
        }
        if (pos == 0)
        {
         push_front(val);
        }
        Node *temp=head;
        for (int i = 0; i < pos - 1; i++)
        {
           temp=temp->next;
        }

          Node *newnode=new Node(val);  
          newnode->next=temp->next;
            temp->next=newnode;
            
          


        

        
    }

    
    void print(){
        Node* temp=head;
        if (head == NULL)
        {
            return;
        }
        while (temp != NULL)
        {
           cout<<temp->data;
           temp=temp->next;
        }
        
        
    }

};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(5);
    ll.push_front(3);

} 
