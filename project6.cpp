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
        if(wp[i][b[i]]<mp[i][b[i]] && wp[b[c]][i]<mp[b[c]][c]){
            return false; 
        }
    }

    return true;
}

void print(int b[]){

}
int main(){ 
    return 0; 
}   