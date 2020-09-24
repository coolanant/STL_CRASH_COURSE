#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int x, int y){
    return x>y;
}

bool cmp(pair<char,int> p1,pair<char,int> p2){
    return p1.second<p2.second;
}
int main() {
    // A-18, B-20, C-19, A-20
    
    // one pair
    pair<char,int> p;
    p=make_pair('A',18);
    cout<<p.first<<":"<<p.second;
    
    // array of pairs
    vector<pair<char,int> > students;
    students.push_back(make_pair('A',18));
    students.push_back(make_pair('B',19));
    students.push_back(make_pair('C',18));
    students.push_back(make_pair('A',20));
    
    for(auto it:students){
        cout<<it.first<<":"<<it.second;
        cout<<endl;
    }
    
    
    // sorting (Algorithms) -(logn)
    vector<int> a={2,5,6,1,3,0,2,9};
    sort(a.begin(),a.end(),compare);
    for(auto it:a){
        cout<<it<<" ";
    }
    
    sort(students.begin(),students.end(),cmp);
        for(auto it:students){
        cout<<it.first<<":"<<it.second;
        cout<<endl;
    }
    
}