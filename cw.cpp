#include <iostream>
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
    <<"\n"
}