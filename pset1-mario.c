#include <stdio.h>
#include <cs50.h>

int main(void)
{

//GET USER INPUT

    int h;

    do
    {
        h = get_int("How high do you want it?");
    }
    while (h < 0 || h > 23);

    //Print the correct number of lines

    for (int r = 0; r < h; r++)
    {
        //Print the correct number of spaces
        for (int space = 0; space < h - r - 1; space++)
        {
            printf(" ");
        }

        //Print the correct number of hashes
        for (int hash = 0; hash < r + 2; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

}
