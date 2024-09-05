#include <iostream>
using namespace std;

/*
int main(){
    int num1, num2;
    cout<< "Enter a number: ";
    cin>> num; 
    if(num%2 ==0 ){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    return 0;
}*/
/*
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;

    int whilesum =0, whileCount =1;
    while(whileCount<= n){
        whileSum+= whileCount;
        whileCount++;
    }
    cout<<"Sum using while loop: " <<whileSum <<endl;
    int forSum =0;
    for(int i =1; i<=n; i++){
        forSum +=i;
    }
    cout<<"Sum using for loop: "<< forSum<< endl;
    return 0;
}
*/
/*
int factorial(int x){
  if(x<=1){
      return 1;
  }
  return x*factorial(x-1);
}
int main(){
 int x;
 cout<<"Enter a postiive integer";
 cin>>x; 
 while(x<0){
   cout<<"Enter a positive integer";
   cin>>x;
 }
 cout<<"The factorial of the number you enter is : "<< factorial(x); 
 return 0;
}
*/
/*
void modifyValue(int x){
    x+=10;
    cout<<"Inside Function: "<<x << endl;
}

void modifyReference(int& x){
    x+=10;
    cout<<"Inside function: "<<x<<endl;
}

int main(){
    int num =5;
    modifyValue(num);
    cout<< "After call by value: "<< num <<endl;
    modifyReference(num);
    cout<<"After call by reference: "<<num<<endl;

    return 0;
}
*/

int toInt(string s)
{
    string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (int i = 0; i < 10; i++)
    {
        if (s == digits[i])
        {
            return i;
        }
    }
    return 0;
}

string toString(int n)
{
    string digits[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (int i = 0; i < 10; i++)
    {
        if (n == i)
        {
            return digits[i];
        }
    }
    return "0";
}

string add(string a, string b)
{
    string total = "";
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        string sum = toString(toInt(a.substr(a.size()-i-1, 1))+toInt(b.substr(a.size()-i-1, 1)));
        total = sum+total;
    }
    return total;
}

int main()
{
    cout << add("4444444", "5555555") << endl;
    return 0;
}