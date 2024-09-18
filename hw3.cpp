#include <iostream>
using namespace std;

int main(){
    string result="";
    while(result != "done"){
        int team[26]={0};
        double score[26]={0};
        for(int i=0;i<result.length();i++){
            team[result[i]-'A']++;
        }
    }
}