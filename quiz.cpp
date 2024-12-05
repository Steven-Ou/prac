#include <iostream>
using namespace std;
/*
int main(int argc, const char * argv[]) {
    //number 1;
    
    int i=1;
     while(i<10){
         if(i%3==0){
             cout<<i<<endl;
         }
         i++;
     }
     //number 2

     for(int j =5; j>0; j--){
        cout << j << endl;
     }
    //number 3

    for(int i =0; i<5; i++){
        for(int j=0; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
     }

    return 0;



    //quiz 2

    int array[2] = {};
    for (int i=2; i>0; i--) {
        for (int j=0; j<2; j++) {
            array[0] = i;
            array[1] = j;

            cout << array[0] << array[1] << " "; 
        }
    }

    return 0;
  

}
*/
int main(){
    int classCount, classSize, maxI = 0;
    cout << "Enter the number of classes: ";
    cin >> classCount;
    cout << "Enter the number of students in each class: ";
    cin >> classSize;
    int** scores = new int*[classCount];
    for (int i = 0; i < classCount; i++)
    {
        scores[i] = new int[classSize];
        cout << "Enter the scores of class " << i+1 << ": ";
        for (int j = 0; j < classSize; j++)
        {
            cin >> scores[i][j];
        }
    }
    for (int i = 0; i < classCount; i++){
        cout << "Scores of students in class " << i+1 << ": ";
        for (int j = 0; j < classSize; j++){
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
    double* averages = new double[classCount];
    for (int i = 0; i < classCount; i++){
        cout << "Average of class " << i+1 << ": ";
        for (int j = 0; j < classSize; j++){
            averages[i] += scores[i][j];
        }
        averages[i] /= classSize;
        cout << averages[i] << endl;
    }
    double max = averages[0];
    for (int i = 1; i < classCount; i++){
        if (averages[i] > max){
            max = averages[i];
            maxI = i;
        }
    }
    cout << "Class " << maxI+1 << " has the highest average of " << max << endl;
    delete[] averages;
    for (int i = 0; i < classCount; i++){
        delete[] scores[i];
    }
    delete[] scores;
    return 0;
}