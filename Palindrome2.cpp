#include<iostream>
#include<string.h>
using namespace std;

void palindrome(string a, int b);

int main(){
    string str;
    cout << "Enter any number or word: ";
    cin >> str;
    int len = str.length();

    if((len % 2) == 0)
        palindrome(str, len);
    else 
        cout << "❌ Can't proceed because the given input has odd characters !!! ❌";
    
    return 0;
}

void palindrome(string a, int n){
    // convert string into character array
    char arr[n+1];   // +1 for '\0'
    strcpy(arr, a.c_str());

    bool isPal = true;

    // check using formula: n - (n - k) == n - (k+1)
    for(int k=0; k < n/2; k++){
        if(arr[k] != arr[n-(k+1)]){  
            isPal = false;
            break;
        }
    }

    if(isPal)
        cout << "✅ The given string is a Palindrome ✅";
    else
        cout << "❌ The given string is NOT a Palindrome ❌";
}
