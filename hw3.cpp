#include <iostream>
using namespace std;
void checking(const string& result){
        int team[26]={0};
        double score[26]={0};
        //calculating the scores:
        for(int i=0;i<result.length();i++){
            team[result[i]-'A']++;
            score[result[i]-'A']+= i+1;
        }
        //Checking if it the same amount runners per team:
        int runner = 0;
        for(int i=0; i<26;i++){

        }

}
int main(){
    string result;
    while(true){
        cout<<"Enter the results of the race (or 'done' to finish): \n";
        cin>> result;
        if(result == "done"){
            break;
        }
        checking(result);

    }
    return 0; 
}