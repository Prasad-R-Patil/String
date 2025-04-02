#include<iostream>

using namespace std;

int Length(char str[])
{
    int cnt=0;
    int i=0;

    while(str[i] !='0')
    {
        cnt++;
        i++;
    }
    return cnt;

}

char* ToaggleString(char str[])
{
    int len = Length(str);
    
    for(int i=0; i<len; i++)
    {
        if((str[i])>='A' && (str[i])<='Z')
        {
            str[i] = str[i] + 32;
        }
        else if((str[i])>='a' && (str[i])<='z')
        {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main()
{
    char str[50];

    cout<<"Enter your string :- ";
    cin.getline(str,50);

    char* Result = ToaggleString(str);

    cout<<"Toaggle String is :-- "<<Result<<endl;


    return 0;
}