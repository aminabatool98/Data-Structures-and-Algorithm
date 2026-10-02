#include <bits/stdc++.h>
using namespace std;


class MyStack {
public:

    queue<int>q1;
    queue<int>q2;
    MyStack() { 
        
    }
    
    void push(int x) {
     while(!q1.empty()){
            q2.push(q1.front()); 
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front()); 
            q2.pop();
        }
    }
};


int main(){
    MyStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
}