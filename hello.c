#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string x;
    // to get user name
    x = get_string("What's your name? ");

    printf("hello, %s\n", x);


}


