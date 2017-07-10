#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n;  
    cin >> n;
     std::vector<int> arr;
    
    for(int i = 0; i<n; i= i+1){
        int g;
        cin>> g;
        arr.push_back(g);
    }
    for(int i= n-1; i>-1; i= i-1){
        cout<<arr.at(i)<<" ";
    }
    
       
    return 0;
}
