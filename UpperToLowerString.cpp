#include<iostream>
using namespace std;

int Length(char str[])
{
    int cnt=0;
    int i=0;

    while(str[i] != '\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}

void UpperToLower(char str[])
{
    int len = Length(str);

    for(int i=0; i<len; i++)
    {
        if((str[i])>='A' && (str[i])<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    cout<<"Converted String is :-- "<<str<<endl;


}


int main()
{
    char str[50];

    cout<<"Enter Your String :- ";
    cin.getline(str,50);


    UpperToLower(str);



    return 0;
}