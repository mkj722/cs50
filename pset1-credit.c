#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //PROMPT FOR INPUT
    long long cc_number;

    cc_number = get_long_long("What is your credit card number? ");

    if (cc_number > 999999999999 && cc_number <= 9999999999999999)
    {

        //calculate check sum

        //Get the second to last number and then every other number, and calculate sum
        long long n = cc_number;
        int digit;
        int sum = 0;
        n = n / 10;
        int mult = 100;

        while (n > .09)
        {
            digit = n % 10;
            digit = digit * 2;

            if (digit > 9)
            {
                digit = digit % 10;
                digit = digit + 1;
            }

            sum = sum + digit;
            n = n / mult;
        }

        //Get the last number and then every other number, and calculate sum
        n = cc_number;
        mult = 100;

        while (n > .09)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / mult;
        }

        //IF ENDS IN ZERO, tell what kind of card, else card is invalid

        if (sum % 10 == 0)
        {
            if (cc_number >= 5100000000000000 && cc_number <= 5599999999999999)
            {
                printf("MASTERCARD\n");
            }

            else if (cc_number >= 340000000000000 && cc_number <= 349999999999999)
            {
                printf("AMEX\n");
            }

            else if (cc_number >= 370000000000000 && cc_number <= 379999999999999)
            {
                printf("AMEX\n");
            }

            else if (cc_number >= 4000000000000 && cc_number <= 4999999999999)
            {
                printf("VISA\n");
            }

            else if (cc_number >= 4000000000000000 && cc_number <= 4999999999999999)
            {
                printf("VISA\n");
            }

            else
            {
                printf("INVALID\n");
            }
        }

        else

            printf("INVALID\n");
        }
    else

    printf("INVALID\n");
    }
