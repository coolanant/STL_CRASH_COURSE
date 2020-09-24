#include<iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

// Stack - LIFO (Last in First Out) - O(1)
//_______________
// top
// push
// pop
// size
// empty

// Queue - FIFO (First in First Out) - O(1)
//__________________
// front
// push
// pop
// size
// empty

// Deque
// ________________
// back
// front
// push_back
// push_front
// pop_back
// push_back
// size,brgin,end,empty

int main() {
    // Stack
    stack<int> st;
    for(int i=0;i<5;i++){
        st.push(i);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    // Queue
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    cout<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    // Deque
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(0);
    cout<<endl;
    for(auto it:dq){
        cout<<it;
    }
}