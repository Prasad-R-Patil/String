#include<iostream>
using namespace std;

int StrLength(char str[])
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


char* CopyString(char Str[])
{
    int Length = StrLength(Str);
    char* Str2 = new char[Length + 1];
    

   for(int i=0; i<=Length; i++)
   {
        Str2[i] = Str[i];

   }
    return Str2;

}


int main()
{
    char str[50];

    cout<<"Enter Your String :- ";
    cin.getline(str,50);
 

    char* Copy = CopyString(str);

    cout<<"Your String is copy in Str2 is :- "<<Copy<<endl;


    delete[] Copy;

    return 0;
}