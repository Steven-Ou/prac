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
            if(b[i]>b[j]){
                int temp = b[i];
                b[i]=b[j];
                b[j]= temp;
            }
        }
    }
    return b;
}

int main(){
    vector <int> a = {2,4,6,8};
    vector <int>b = {1,3,7,10,13};
    vector <int> c = merge(a,b);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout<<endl;

    return 0;
}
