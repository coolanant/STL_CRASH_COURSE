#include <iostream>
#include<vector>
using namespace std;

// Vectors
// 1. Alternative for arrays
// 2. They are sequenence containers
// 3. they can have dynamic size
int main() {
    vector<int> a;// empty array
    vector<int> b(5);// size of array
    vector<int> c(5,1);// size and intial value
    // push_back
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    
    // pop_back
    a.pop_back();
    
    // print-1
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //print-2
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    // print-3
    // vector<int>::iterator it;
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    
    if(c.empty()==true){
        cout<<"\n c is empty";
    }else{
        cout<<"\n c is not empty";
    }
    
    // to clear the array
    c.clear();
    for(auto x:c){
        cout<<x;
    }
    
    if(c.empty()==true){
        cout<<"\n c is empty";
    }else{
        cout<<"\n cis not empty";
    }
    
    vector<int> arr(10);
    for(int i=0;i<10;i++){
        // arr[i]=i;
        arr.at(i)=i;
    }
    cout<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    // erase
    arr.erase(arr.begin()+2);
    arr.erase(arr.begin()+2,arr.end()-2);
    
    // insert
    arr.insert(arr.begin()+2,2);
    
    // resize
    arr.resize(6);
    
    cout<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    
    cout<<endl;
    cout<<arr[arr.size()-1];
    
    // front and back
    cout<<arr.back();
    cout<<arr.front();
}

// Functions provided by Vector
// 1. at - O(1)
// 2. back/front - O(1)
// 3. begin/end - O(2)
// 4. clear - O(N)
// 5. empty - O(1)
// 6. erase - O(N+M) //M -no. of el deleted, N-no. of elements moved
// 7. insert - O(N+M) //M -no. of el inserted, N-no. of elements moved
// 8. push_back/pop_back - O(1)
// 9. size/resize - O(1)
