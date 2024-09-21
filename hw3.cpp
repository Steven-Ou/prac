#include <iostream>
#include <string>
#include<iomanip>
#include <map>
#include <algorithm>
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
            if(team[i]>0){
                if(runner==0){
                    runner = team[i];
                }else if(runner != team[i]){
                    cout<<"ERROR: TEAMS DON'T HAVE THE SAME AMOUNT OF RUNNERS. \n";
                    return;
                }
            }
        }
        //Storing team into a map for sorting:
        map<char,double> points;
        for(int i=0;i<26;i++){
            if(team[i]>0){
                points['A'+i]= score[i]/team[i];
            }
        }
        //Showing the team size/number of runners/the points of the team
        cout<<"There are "<< points.size() <<" teams. \n"; 
        cout<<"Each team has "<< runner << " runners.\n";
        cout<<"Team Scores:\n";
        for(const auto& entry: points){ //goes through the points folder and print out score!
            cout<< entry.first << ": "<<fixed<< setprecision(2) <<entry.second<<endl;
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