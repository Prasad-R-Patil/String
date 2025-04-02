#include<stdio.h>
#include<string.h>

void rev(char str[] , int s)
{
    int start=0;
    int end= s-1;
    int temp=0;

  while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;

    }
}

int main()
{

    char str[]="prasad";

    int size = strlen(str);

    printf("Original string: %s\n", str);
    rev(str, size);
    printf("Reversed string: %s\n", str);

}