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
    //This way from line 25-35 is the only way for vscode
    //This method is would work else where b = {1,3,7,10,13};
    vector<int> a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);
    a.push_back(8);
    vector<int>b;
    b.push_back(1);
    b.push_back(5);
    b.push_back(7);
    b.push_back(10);
    b.push_back(13);
    vector <int> c = merge(a,b);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout<<endl;

    return 0;
}
