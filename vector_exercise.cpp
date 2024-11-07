#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int c, cS,s; //C for class number//cS class size//s is score
    double sum =0, avg = 0; 
    cout<<"Enter the number of classes their are : \n";
    cin>>c;
    vector<vector<int>> v(c); 
    for(int i =0;i<c;i++){
        cout<<"Enter the score of the student in class "<<i+1<<": ";
        cin>>cS; 
        v[i].push_back(cS);
        for(int j = 0; j<cS;j++){
            cout<< "Enter the score of student "<< j+1<< ": ";
            cin>>s;
            v[i].push_back(s);
        }
    }
    for(int i=0;i<cS;i++){
        for(int j=1;j<v[i].size();j++){
            sum += v[i][j];
        }
        sum = sum/(v[i].size()-1);
        for(int j=1;j<v[i].size();j++){
            if(v[i][j]>sum){
                avg++;
            }
        }
        cout<< avg/(v[i].size()-1)<<endl;
        sum=0;
        avg=0;
    }
    return 0;
}