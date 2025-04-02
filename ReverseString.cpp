#include<iostream>
using namespace std;

int Length(char str[])
{
    int cnt = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        cnt++;
        i++;
    }

    return cnt;

}


void RevString(char str[])
{
    int len = Length(str);

    int start = 0;
    int end = len-1;

    while(start<end)
    {
        char temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        
    }

    cout<<"Rev Str is :- "<<str<<endl;

}

int main()
{
    char str[50];

    cout<<"Enter Your String :- ";
    cin.getline(str,30);

    RevString(str);





    return 0;
}