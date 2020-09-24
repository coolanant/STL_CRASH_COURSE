#include <iostream>
#include<vector>
#include<set>
using namespace std;

// 1. unique
// 2. sorted
int main() {
    vector<int> a={2,5,6,1,3,0,2,9};
    set<int> s;
    for(int it:a){
        s.insert(it);
    }
    for(auto it:s){
        cout<<it<<" ";
    }
    
    if(s.count(9)){
        cout<<"Present";
    }
    
    auto x=s.find(2);
    cout<<*x;
    
    s.erase(x,s.end());
    cout<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }
    
    
    // FUNCTIONS
    // 1. insert - O(logn)
    // 2. size - O(1)
    // 3. begin,end -O(1)
    // 4. empty - O(1)
    // 5. clear - O(n)
    // 6. count - O(logn)
    // 7. erase - O(logm)-m is no. of el deleted
    // 8. find - O(logn)
    
    
}