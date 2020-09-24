#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

// dictionary like container
// one value per key
int main(){
    // EX-1 delhi-5, gujrat-2, jammu-1, nepal-3, kerala-10
    // initialised
    map<string,int> data;
    
    // stored(key,values)
    // data["delhi"]=5;
    // data["gujrat"]=2;
    // data["jammu"]=1;
    // data["kerala"]=10;
    
    // print
    for(auto it:data){
        // first & second
        cout<<it.first<<":"<<it.second;
        cout<<endl;
    }
    
    // EX-2 - frequency
    vector<int> arr={1,2,2,4,3,4,5,3,3};
    // map<int,int> m; - (sorts automatically)(O(logn))
    unordered_map<int,int> m; //(does not sort)(O(1))
    for(auto it:arr){
        m[it]++;
    }
    // 1-1
    // 2-2
    // 4-2
    // 3-3
    // 5-1
    for(auto it:m){
        cout<<it.first<<":"<<it.second;
        cout<<endl;
    }
    
    // print - 2
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<":"<<it->second;
        cout<<endl;
    }
    
    cout<<data["delhi"];
    cout<<data.at("delhi");
    
    //map               unordered_map
    // O(logn)                 O(1)
    
}