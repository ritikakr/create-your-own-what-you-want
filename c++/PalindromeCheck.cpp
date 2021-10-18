#include <iostream>
#include <string.h>

using namespace std;


int main(){
    char checkString[50];
    cout<<"Input string: ";
    cin>>checkString;

    bool isPalindrome = true;
    int stringLength = strlen(checkString);

    for(int i=0; i<stringLength/2; i++){
        if(checkString[i]!=checkString[stringLength-1-i]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome){
        cout<<checkString<<" is a Palindrome"<<endl;
    }else{
        cout<<checkString<<" is not a Palindrome"<<endl;
    }
}