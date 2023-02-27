#include <stdio.h>
#include "../../cs50.h"

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        int blocks = i + 1;
        int spaces = height - i - 1;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < blocks; j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}