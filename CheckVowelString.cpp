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

bool isVowel(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' );
}

void CheckVowel(char str[])
{
    int len = Length(str);

    for(int i=0; i<len; i++)
    {
        if(isVowel(str[i]))
        {
            cout<<str[i]<<" ";
        }
    }
    cout<<endl;

}


int main()
{
    char str[50];

    cout<<"Enter your String :- ";
    cin.getline(str,50);

    CheckVowel(str);


    return 0;
}