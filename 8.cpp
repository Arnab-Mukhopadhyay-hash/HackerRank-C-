#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i< n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    // METHOD 1
    // for(int i = v.size() - 1; i >= 0; i--){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    
    // METHOD 2
    reverse(v.begin(), v.end());
    for(auto i: v){
        cout<<i<<" ";
    } 
    cout<<endl;
    return 0;
}

