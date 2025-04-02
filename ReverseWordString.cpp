#include<iostream>
using namespace std;

int Length(char str[])
{
    int cnt = 0;
    int i = 0;

    while(str[i] !=0)
    {
        cnt++;
        i++;
    }
    return cnt;
}
 
 void ReverseWord(char str[])
 {
    int len = Length(str);
    int Start = 0;

    for(int i=0; i<=len; i++)
    {
        //Each Word Rev

        if(str[i] == ' ' || str[i] == '\0')
        {
            int End = i-1;

            while(Start<End)
            {
                char Temp = str[Start];
                str[Start]=str[End];
                str[End]=Temp;

                Start++;
                End--;
            }

            Start = i+1;
        }

    }
     
     //String Rev

     int First=0;
     int Last=len-1;

     while(First<Last)
     {
        int Temp = str[First];
        str[First] = str[Last];
        str[Last] = Temp;

        First++;
        Last--;
     }


 }
 
int main()
{
    char str[50];
    cout<<"Enter Your String :-- ";
    cin.getline(str,50);
 
    ReverseWord(str);
    cout << "Reversed words string: " << str << endl;
 
 return 0;
}