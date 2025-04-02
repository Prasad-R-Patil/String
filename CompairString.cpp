#include<iostream>
using namespace std;


int CompairString(char str1[] , char str2[])
{
    int i = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }

        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] = '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }


}



int main()
{
    char str1[50];
    char str2[50];

    cout<<"Enter First String :- ";
    cin.getline(str1,50);

    cout<<"Enter Second String :- ";
    cin.getline(str2,50);

    int Result = CompairString(str1 , str2);

    if (Result == 0)
        cout << "Strings are equal." << endl;
    else if (Result < 0)
        cout << "First string is smaller than the second string..." << endl;
    else
        cout << "First string is greater than the second string..." << endl;

    return 0;
}