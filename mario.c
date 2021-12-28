#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    // Get height from user
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    int block;
    int width = 0;
    int dot;

    for (block = 0; block < height; block++)
    {
        // Print spaces
        for (dot = height - block - 2; dot >= 0; dot--)
        {
            printf(" ");
        }
        // Print blocks
        for (width = 0; width <= block; width++)
        {
            printf("#");
        }
        printf("\n");
    }
}