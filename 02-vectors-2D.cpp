#include <iostream>
#include<vector>
using namespace std;

int main() {
    // int x[10][5];
    int c=0;
    // With Size
    vector<vector<int> > arr(10,vector<int>(5));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            arr[i][j]=c++;
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Without Size
    vector<vector<int> > mat;
    vector<int> x(5);
    mat.push_back(x);
    vector<int> y(2,1);
    mat.push_back(y);
    
     for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
}