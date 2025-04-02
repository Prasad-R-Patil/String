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
 

 int CountCapitalLetter(char str[])
 {
    int len = Length(str);

    int Count = 0;

    for(int i=0; i<=len; i++)
    {
        if(str[i]>= 'A' && str[i]<= 'Z')
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

   int Result = CountCapitalLetter(str);

   cout<<"Capital Letter Count is :- "<<Result<<endl;
 
 
 return 0;
}