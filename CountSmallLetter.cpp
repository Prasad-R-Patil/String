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
 

 int CountSmallLetter(char str[])
 {
    int len = Length(str);

    int Count = 0;

    for(int i=0; i<=len; i++)
    {
        if(str[i]>= 'a' && str[i]<= 'z')
        {
            Count++;
        }
    }
    
    return Count;
 }
 
int main()
{
    char str[50];
    cout<<"Enter Your String :- ";
    cin.getline(str,50);

   int Result = CountSmallLetter(str);

   cout<<"Small Letter Count is :- "<<Result<<endl;
 
 
 return 0;
}