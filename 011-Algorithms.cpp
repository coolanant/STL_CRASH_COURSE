#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr={1,2,2,3,4,6,7,10};
    
    // 1. Binary Search
    cout<<binary_search(arr.begin(),arr.end(),10)<<endl;
    
    // 2. find
    auto it=find(arr.begin(),arr.end(),10);
    // getting index from the iterator
    cout<<it-arr.begin()<<endl;
    
    // 3. reverse
    reverse(arr.begin(),arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    // 4. max, min,swap
    int a=5,b=2;
    cout<<endl<<max(a,b);
    cout<<endl<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<":"<<b<<endl;
    
    // 5. sort
    sort(arr.begin(),arr.end());
}