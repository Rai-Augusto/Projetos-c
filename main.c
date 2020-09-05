#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
    printf("Wow nice to met you, is good to have a friend with %i years old\n",nameAge);

    //type name: char(%c); float(%f); double(%f); int(%d)
    //printf("Hello World!!\n");
    //scanf("%s;%d;%f,%f",&x);
    //var = expression;
    //const = never change;
    //#define name value
    //math operations (+ plus ;-minus ;* mulplied by;/;% rest);
    /* comments */
    //x++ = x+1 or --y = y-1


    return 0;
}




