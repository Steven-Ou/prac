#include <iostream>
#include <vector>
using namespace std; 
//example
//a<1,10,9,4,> b<5,6,3,2,11,15>
vector<int> merge(vector<int> a, vector<int> b){
    for(int i=0;i<a.size();i++){
        b.push_back(a[i]);
    }
    for(int i=0;i<b.size()-1;i++){
        for(int j=i+1;j<b.size();j++){
            
        }
    }
}