#include<iostream>
using namespace std;

int Length(char str[])
{
    int cnt=0;
    int i=0;

    while(str[i] != 0)
    {
        cnt++;
        i++;

    }
    return cnt;
}

//check string are Palindromec or not
bool isPalindrome(char str[])
{
    int len = Length(str);
    int Start = 0;
    int End = len-1;

    while(Start<End)
    {
        if(str[Start] != str[End])
        {
            return false;
        }

        Start++;
        End--;
    }

    return true;

}


int main()
{

    char str[50];

    cout<<"Enter Your String :- ";
    cin.getline(str,50);


    if(isPalindrome(str))
    {
         cout <<"This [" << str << "] is a palindrome String..." << endl;
    }
    else
    {
        cout <<"This [" << str << "] is Not a palindrome String..." << endl;
    }

    return 0;
}