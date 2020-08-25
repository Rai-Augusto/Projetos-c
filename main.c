#include <stdio.h>
#include <stdlib.h>

int main()
{
    char varName[20];
    int nameAge;

    printf("Hello world!\n");
    printf("Hi, my name is Rai. Now I am 20 years old !\n");
    printf("So now I want know what's your name ?\n");
    scanf("%s",varName);
    printf("How old are you ?");
    scanf("%i",&nameAge);
    printf("Hi %s\n",varName);
    printf("Wow nice to met you, is good to have a friend with %i years old",nameAge);


    return 0;
}
