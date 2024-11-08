#include <iostream>
#include <vector>
#include <iomanip>
using namespace std; 

int main(){
    int c, cS,s; //C for class number//cS class size//s is score
    double sum =0, avg = 0; //Sum to store the total//Avg is to store above avg
    cout<<"Enter the number of classes are their: \n";//Prompting for number of classes
    cin>>c;//Ask the user for the number
    vector<vector<int> > v(c); //2d vector (Array)
    for(int i =0;i<c;i++){//Loop over each class to get the number of students and their scores
        cout<<"Enter the number of the student in class "<<i+1<<": ";
        cin>>cS; //Ask for the size.
        v[i].push_back(cS);//Added the size number to the end of the array.
        for(int j = 0; j<cS;j++){
            cout<< "Enter the score of student "<< j+1<< ": ";
            cin>>s; //Ask for the score
            v[i].push_back(s); //Push the score to the end of the array.
        }
    }
    //Loop over each class to calculate average and determine scores above the average
    for(int i=0;i<cS;i++){
        for(int j=1;j<v[i].size();j++){
            sum += v[i][j]; //Accumulate all scores in the class 
        }
        //Calculate the average score for the class
        sum = sum/(v[i].size()-1);
        for(int j=1;j<v[i].size();j++){
            if(v[i][j]>sum){
                avg++;
            }
        }
        // setprecision to round the last digit and *100 to move the answer to whole percentage like 57%
        cout<< setprecision(5)<<(avg/(v[i].size()-1))*100.000<<" % " <<endl;
        sum=0;
        avg=0;
    }
    return 0;
}