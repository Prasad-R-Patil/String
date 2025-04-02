#include<iostream>
//#include<cstring>
using namespace std;


//Count String Lenth
int StrLengthX(char str[])
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

int main()
{
    char ch = '\0';
    char str[50];

    cout<<"Enter Your String :- ";
    cin.getline(str,20);

    // int length = strlen(str);
    // cout<<"str length is :- "<<length<<endl;
     
    int Length = StrLengthX(str);

    

    cout<<"String Length is :- "<<Length<<endl;



    return 0;
}