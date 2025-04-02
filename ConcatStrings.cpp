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


void ConcatStrings(char Str1[] , char Str2[])
{
    int Length1 = StrLength(Str1);
    int Length2 = StrLength(Str2); 

    Str1[Length1] = ' ';
    Length1++;

   for(int i=0; i<=Length2; i++)
   {
        Str1[Length1 + i] = Str2[i];

   }

}


int main()
{
    char str1[100];

    cout<<"Enter Your First String :- ";
    cin.getline(str1,100);

    char str2[50];

    cout<<"Enter Your Second String :- ";
    cin.getline(str2,50);
 

     ConcatStrings(str1,str2);

    cout<<"Your Concat String is  :- "<<str1<<endl;


    

    return 0;
}