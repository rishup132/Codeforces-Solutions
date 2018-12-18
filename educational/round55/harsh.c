#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Harsh";
    char s2[20] = "harsh";

    if(strcmp(s1,s2) == 0)
    {
        printf("unequal");
    }
    else
    {
        printf("equal");
    }
}