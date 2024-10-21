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