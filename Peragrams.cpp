#include <iostream>

using namespace std;



string checkPalindrome(string input)
{
    bool check=true;

    
    for(int i=0;i<input.length();i++)
    {
        
        
        if(input[i]!=input[input.length()-1-i])
        {
            check=false;
            break;
        }
    }

    if(check==1)
    {
        return "true";
    }
    else
    {
        return "false";
    }
    
    
}




int main() 
{
    string input;
    
    cout << "Enter string?\n";

    cin>>input;

    cout << checkPalindrome(input)<< "\n";


    return 0;
}