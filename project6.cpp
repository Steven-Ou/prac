//Stable Marriage
#include <iostream>
using namespace std;
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
        if((mp[i][b[i]]<mp[i][b[i]]) && (wp[b[c]][i]<wp[b[c]][c])){
            return false; 
        }
        if((mp[][]<mp[][])&&(wp[][]<wp[][])){
            return false;
        }
    }

    return true;
}

void print(int b[]){

}
int main(){ 
    int q[3]={};
    int c=0;
    q[c]=0;
    while(c>=0){
        if(c==3){
            print(q);
            c--
        }
        q[c]=-1;
        while(q[c]<3){
            q[c]++;
            if(q[c]>2){
                c--;
            }else if(ok(b,c)){
                return 0; 
            }
        }
    }
    return 0; 
}   