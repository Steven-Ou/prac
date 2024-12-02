#include <iostream>
#include <vector>
using namespace std; 

/* 
//Without pointer 
void swap(int a[],int b[], int size){
    for(int i =0; i< size; i++){
        int temp;
        temp = a[i]; 
        a[i] = b[i];
        b[i]= temp; 
    }
    return; 
       
}
void print(int a[], int size){
    for( int i =0; i<size; i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}
*/
/*
//with pointer
void swapa(int n, double *u,double *v){
    for(int i =0; i<n; i++){
        double temp = u[i];
        u[i]=v[i];
        v[i]=temp;
    }
}
void print(double a[], int size){
    for(int i=0;i<size; i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
*/
/*

int main(){
    char c; //var of type char
    short s;//variable of type short
    int i;//var of type int
    long l;//var of type long;
    long ll;//var of type long long;
    float f;//var of type float;
    double d;//var of type double;
    long double ld;//var of type long double
    int array[20];// built in array of int
    int *ptr =array;// var type int
    cout<< "sizeof(c) = "<< sizeof(c)
    <<"\tsizeof(char) ="<< sizeof(char)
    <<"\nsizeof(s) = "<<sizeof(s)
    <<"\tsizeof(short) = "<<sizeof(short)
    <<"\nsizeof(i) = "<<sizeof(i)
    <<"\tsizeof(int) = "<<sizeof(int)
    <<"\nsizeof(l) = "<<sizeof(l)
    <<"\tsizeof(long) = "<<sizeof(long)
    <<"\nsizeof(ll) = "<<sizeof(ll)
    <<"\tsizeof(long long) = "<<sizeof(long long)
    <<"\nsizeof(f) = "<<sizeof(f)
    <<"\tsizeof(float) = "<<sizeof(float)
    <<"\nsizeof(d) = "<<sizeof(d)
    <<"\tsizeof(double) = "<<sizeof(double)
    <<"\nsizeof(ld) = "<<sizeof(ld)
    <<"\tsizeof(long double) = "<<sizeof(long double)
    <<"\nsizeof(array) = "<<sizeof(array)
    <<"\nsizeof(ptr) = "<<sizeof(ptr)<<endl;
    //end main
}
*/
/*
int main(){
    vector<double> example(5,1.1);

    cout<<"The original vector is: "<<endl;

    //for each loop is only provided since c++11 
    for(double i:example){
        cout<<i<<" ";
    }cout<<endl;

    example.push_back(1.2);
    example.push_back(2.4);
    example.push_back(3.6);

    cout<< "the vector add 3 new elements is: "<<endl;
   
    for(int i=0;i<8;i++){
        cout<<example.at(i)<< " ";
    }cout<<endl;
    cout<<"The first element of the vector is: "<< example.front()<<endl;
    cout<<"The last element of the vector is: "<< example.back()<<endl;
    cout<<"The size of the vector is: "<< example.size()<<endl;

    for(int i=0; i<6;i++){
        example.pop_back();
    }
    cout<< "After remove 6 elements, the size of vector is: "<<example.size() <<endl;
    
    return 0;
}
*/
/*
int main(){
    int c, cS,s; 
    double sum =0, avg = 0; 
    cout<<"Enter the number of classes their are : \n";
    cin>>c;
    vector<vector<int>> v(c); 
    for(int i =0;i<c;i++){
        cout<<"Enter the score of the student in class "<<i<<": ";
        cin>>cS; 
        v[i].push_back(cS);
        for(int j = 0; j<cS;j++){
            
        }
    }
}
*/
/*
int main(){
    int b,store;
    cout<<"Enter a number"<<endl;
    cin>>b;
    while(b<=0){
        cout<<"Number can't be less than 1"<<endl;
        cin>>b;
    }
    int *a = new int[b];
    cout<< "Enter "<< b << " elements into the array: "; 
    for(int i =0; i< b;i++){
        cin>>store;
        *(a+i)= store; 
    }
    for(int i=0;i<b/2;i++){
        int temp = *(a+1);
        *(a+1) = *(a+n-(i+1));
        *(a+n-(i+1)) = temp; 
    }
    for(int i=0;i<b;i++){
        cout<< *(a+1)<< " "; 
    }
    cout<<endl;
    delete []a;  
}
*/

class BankAccount{
private:
    double balance; 
    string accountNumber; 
public:
    BankAccount(double x, string y ){
        balance =x;
        accountNumber =y; 
    }
    void deposit(double amount){
        balance = balance + amount;
        
    }
    void withdraw(double amount){

    }
    double getBalance(){
        return balance; 
    }
};