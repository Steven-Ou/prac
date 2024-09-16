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
//Allen work
/*
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
*/
/*

string add(const string& num1, const string& num2) {
    string result;
    int carry = 0;
    int n1 = num1.size();
    int n2 = num2.size();
    int maxLength = max(n1, n2);

    for (int i = 0; i < maxLength; ++i) {
        int digit1 = (i < n1) ? num1[n1 - 1 - i] - '0' : 0;
        int digit2 = (i < n2) ? num2[n2 - 1 - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }

    if (carry) {
        result.push_back(carry + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    string sum = add(num1, num2);
    cout << "The sum is: " << sum << endl;

    return 0;
}
*/
/*
string add(string a, string b){
    string result ="";
    int lengthA = a.length();
    int lengthB= b.length();
    int carry =0;
    while(lengthA>0 || lengthB>0){
        int digitA = lengthA >0 ? a[lengthA-1]-'0':0;
        int digitB = lengthB >0 ? b[lengthB-1]-'0':0;
        int temp = digitA+digitB+carry;
        int carry = temp/10;
        result.insert(0, to_string(temp%10));
        lengthA--;
        lengthB--; 
        
       
    }
    if(carry ==1){
        return "1" + result;
    }else{
        return result;
    }

}
int main(int argc, const char * argv[]){
    char num_1[100];
    char num_2[100];
    cout<<"Enter a number"<<endl;
    cin>>num_1;
    cout<<"Enter a number"<<endl;
    cin>>num_2;
    cout<<add(num_1,num_2)<<endl;

    return 0;
}
*/

int main(){
    int i=0;
    
}