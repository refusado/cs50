#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string test = get_string("What is your name? ");
    printf("Your name is %s\n", test);
}