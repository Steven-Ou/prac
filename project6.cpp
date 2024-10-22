//Stable Marriage
#include <iostream>
using namespace std;
int shu =0;
int mp[3][3] = {
    {0,2,1},
    {0,2,1},
    {1,2,0}
};
int wp[3][3] = {
    {2,1,0},
    {0,1,2},
    {2,0,1}
};
bool ok(int b[], int c){
    for(int i =0;i<c;i++){
        if(b[i]==b[c]){
            return false;
        }
        if((mp[i][b[c]]<mp[i][b[i]]) && (wp[b[c]][i]<wp[b[c]][c])){
            return false; 
        }
        if((mp[c][b[i]]<mp[c][b[c]])&&(wp[b[i]][c]<wp[b[i]][i])){
            return false;
        }
    }

    return true;
}

void print(int b[]){
   
    cout<<" Solution Number # "<<++shu<<": \n"; 
    cout<<" Man\t\tWoman\n"; //creating horizontal tab space 

    //Printing out the parings 
    for(int i=0;i<3; i++){
        cout<< i << "\t\t" << b[i]<<"\n";
    }
    cout<<endl; 

}
int main(){ 
    int q[3]={};
    int c=0;
    q[c]=0;
    while(c>=0){
        c++;
        if(c==3){
            print(q);
            c--;
        }else{
            q[c]=-1;
        }
        while(q[c]<3){
            q[c]++;
            if(q[c]>2){
                c--;
            }else if(ok(q,c)){
                break;
            }
        }
    }
    return 0; 
}   