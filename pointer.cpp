/*
POINTER PRACTICE
    Follow all of the directions carefully
    Include your code directly below each comment
    created by Allen Singleton
*/

#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    // create a swap() function using only pointers
    int temp;
    int temp = *a; 
    *a = *b;
    *b = temp; 

}

void printArray(int *a, int size)
{
    for(int i=0;i<size;i++){
        cout<<*(a+i);
    }
}

int main()
{
        // PART 1: Integer Pointer Questions
    
    // declare and initialize an integer variable, and name it i
    int i = 20;

    // print the size of i
    cout<<sizeof(i)<<endl;
    // declare an integer pointer, and name it ptr1
    int *ptr1; 
    // assign ptr1 to the address of i
    ptr1 = &i; 
    // print the size of ptr1
    cout<<sizeof(ptr1)<<endl;
    // using ptr1, change the value of i to 10
    *ptr1 = 10; 
    // using ptr1, print the value of i to the terminal
    cout<<*ptr1<<endl;
    // using i, print the address of i
    cout<<&i<<endl;
    // using ptr1, print the address of i
    cout<<ptr1<<endl;
    // declare and initialize another integer variable, and name it j
    int j = 40;

    // print the size of j
    cout<<sizeof(j)<<endl;
    // declare another integer pointer, and name it ptr2
    int *ptr2; 
    // print the size of ptr2
    cout<<sizeof(ptr2)<<endl;
    // using ptr2, change the value of j to the value of i
    ptr2 = &j;
    ptr2 = &i; 
    // using ptr2, change the value of j to 100
    *ptr2 = 100; 


        // PART 2: swap() function
    
    // using i, print the value of i
    cout<<i<<endl;
    // using j, print the value of j
    cout<<j<<endl;
    // using ptr1, print the value of i
    ptr1 = &i;
    cout<<*ptr1<<endl;
    // using ptr2, print the value of j
    ptr2 = &j;
    cout<<*ptr2<<endl;
    // using ptr1 and ptr2, swap the values of i and j
    swap(*ptr1,*ptr2); 
    // using i, print the value of i
    cout<<i<<endl;
    // using j, print the value of j
    cout<<j<<endl;
    // using ptr1, print the value of i
    cout<<*ptr1<<endl;
    // using ptr2, print the value of j
    cout<<*ptr2<<endl;
    // using the addresses of i and j, swap the values of i and j
    swap(&i,&j);
    // using i, print the value of i
    cout<<i<<endl;
    // using j, print the value of j
    cout<<j<<endl;
    // using ptr1, print the value of i
    cout<<*ptr1<<endl;
    // using ptr2, print the value of j
    cout<<*ptr2<<endl;


        // PART 3: Array Pointer Questions

    // declare and initilize an integer array of size 10, and name it arr
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    // print the size of arr
    cout<<sizeof(arr)<<endl;
    // declare an integer pointer, and name it p
    int *p;
    // assign p to the address of arr
    p = &arr[10]; 
    // print the size of p
    cout<<sizeof(p);
    // using p, change the value of arr[2] to 5
    *(p+2)=5; 
    // using p, change the value of arr[4] to 1
    *(p+4)=1;
    // using p, change the value of arr[9] to 8
    *(p+9)=8;


        // PART 4: printArray() function

    // using p, print the value of arr[0]
    cout<<*(p+0)<<endl;
    printArray(p,0);
    // using p, print the value of arr[6]
    cout<<*(p+6)<<endl;
    // using p, print the value of arr[9]
    cout<<*(p+9)<<endl;
    // using arr, print the values of arr
    for(int i=0; i<11;i++){
        cout<<arr[i];
    }cout<<endl;

    // using p, print the values of arr
    for(int i=0; i<11; i++){
        cout<<*(p+i);
    }
    cout<<endl;

    return 0;
}
 