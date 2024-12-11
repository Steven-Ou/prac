#include <iostream>
#include <vector>
using namespace std;

//#1
/*
    void f(int f){
        if(f!==4|| f!==5)return;
        cout<<"Hello World \n";
    }
    int main(){
        f(3);
        f(4);
        f(5);
        //It will return nothing 
    }
*/
//#2

struct Student{
    string name;
    double midterm, finalgrade;

}
/*

int main(){
    int index = 0;
    vector <Student> students; 
    string St;
    while(true){
        
        
        if(St = ""){
            break;
        }
        Student s; 
        students.push_back(s);
        cout<<"Enter a student name ";
        cin>> St;
        students(index) = St; 
    }
}

*/
//3
/**/
void g(int b, string& text){
    if(b==0){
        return;
    }
    cout<<text<< "**";
    g(b-1,text);
}
void f(int m, int n, string& text){
    if(m==0){
        return;
    }
    g(n,text);
    cout<<endl;
    f(m-1,n,text);
}

int main(){
    int m,n;
    string text;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter text: ";
    cin>>text;
    f(m,n,text);
    return 0; 
}