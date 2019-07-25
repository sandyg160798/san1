#include <stdio.h>

int main()
{
    char b;
    char c[45]={'a','e','i','o','u'};
    scanf("%c",&b);
    if((b=='a')||(b=='e')||(b=='i')||(b=='o')||(b=='u'))
    {
        printf("vowel");
    }
    else
    {
        printf("not an vowel");
    }
    return 0;
}
