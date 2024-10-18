#include <iostream>
using namespace std;

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