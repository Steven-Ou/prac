/*
POINTER PRACTICE
    Follow all of the directions carefully
    Include your code directly below each comment
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

void printArray(int a, int size)
{
    for(int i=0;i<size;i++){
        cout<<*a[i];
        
    }
}

int main()
{
        // PART 1: Integer Pointer Questions
    
    // declare and initialize an integer variable, and name it i
    int i = 20;

    // print the size of i
    
    // declare an integer pointer, and name it ptr1

    // assign ptr1 to the address of i

    // print the size of ptr1

    // using ptr1, change the value of i to 10

    // using ptr1, print the value of i to the terminal

    // using i, print the address of i

    // using ptr1, print the address of i

    // declare and initialize another integer variable, and name it j
    int j = 40;

    // print the size of j

    // declare another integer pointer, and name it ptr2

    // print the size of ptr2

    // using ptr2, change the value of j to the value of i

    // using ptr2, change the value of j to 100



        // PART 2: swap() function
    
    // using i, print the value of i

    // using j, print the value of j

    // using ptr1, print the value of i

    // using ptr2, print the value of j

    // using ptr1 and ptr2, swap the values of i and j

    // using i, print the value of i

    // using j, print the value of j

    // using ptr1, print the value of i

    // using ptr2, print the value of j

    // using the addresses of i and j, swap the values of i and j

    // using i, print the value of i

    // using j, print the value of j

    // using ptr1, print the value of i

    // using ptr2, print the value of j



        // PART 3: Array Pointer Questions

    // declare and initilize an integer array of size 10, and name it arr
    int arr[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    // print the size of arr

    // declare an integer pointer, and name it p

    // assign p to the address of arr

    // print the size of p

    // using p, change the value of arr[2] to 5

    // using p, change the value of arr[4] to 1

    // using p, change the value of arr[9] to 8



        // PART 4: printArray() function

    // using p, print the value of arr[0]

    // using p, print the value of arr[6]

    // using p, print the value of arr[9]

    // using arr, print the values of arr

    // using p, print the values of arr

    return 0;
}
