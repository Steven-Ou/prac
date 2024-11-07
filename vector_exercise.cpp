#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int c, cS,s; 
    double sum =0, avg = 0; 
    cout<<"Enter the number of classes their are : \n";
    cin>>c;
    vector<vector<int>> v(c); 
    for(int i =0;i<c;i++){
        cout<<"Enter the score of the student in class "<<i<<": ";
        cin>>cS; 
        v[i].push_back(cS);
        for(int j = 0; j<cS;j++){
            
        }
    }
}