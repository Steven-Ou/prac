//Stable Marriage
#include <iostream>
using namespace std;
int shu =0;//Count variable
int mp[3][3] = {//Men's preference list
    {0,2,1},//Man 0 prefers woman 0 the most, then woman 2, then woman 1.
    {0,2,1},//the same thing as men 1
    {1,2,0}//man 2 prefer woman 1 the most, then woman 2, then woman 0.
};
int wp[3][3] = {//Women's preference list
    {2,1,0},//Woman 0 prefers man 2 the most, then man 1, then man 0.
    {0,1,2},// the pattern should be understandable!
    {2,0,1}// it's similar to the man ways too!
};
//Function is use to check if the marriage is stable
bool ok(int b[], int c){
    //loop through all men before men c to check if the paring is valid
    for(int i =0;i<c;i++){ 
    //check if any two men are paired with the same womans        
        if(b[i]==b[c]){
            return false;
        }
    //Check if man i prefers the current woman (b[c]) over his current match 
        if((mp[i][b[c]]<mp[i][b[i]]) && (wp[b[c]][i]<wp[b[c]][c])){
            return false; 
        }
    //
        if((mp[c][b[i]]<mp[c][b[c]])&&(wp[b[i]][c]<wp[b[i]][i])){
            return false;
        }
    }

    return true;
}

void print(int b[]){
    //Increasing and displaying the solution
    cout<<" Solution Number # "<<++shu<<": \n"; 
    cout<<"Man\t\tWoman\n"; //creating horizontal tab space 

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