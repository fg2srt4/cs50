#include <stdio.h>
#include <cs50.h>

char *type(long long num1);


int main(void)
{

    int total, odd_sum1 = 0, odd_dig1, ev_dig1, ev_sum = 0;
    long long card, card2, original_card;

    card = get_long("Number: ");
    card2 = card;
    original_card = card;
    
    if (card < 1000000000000)
    {
        printf("INVALID\n");
        return 0;
    }

    while (card > 1)
    {
        odd_dig1 = (((card / 10) % 10) * 2);
        //odd_dig1 = 12
        if (odd_dig1 >= 10)
        {
            int first = odd_dig1 % 10;
            int second = odd_dig1 / 10;
            int odd_sum_new = first + second;
            odd_sum1 += odd_sum_new;
        }
        else
        {
        odd_sum1 += odd_dig1;
        }
        card = (card / 10) / 10;
    }


    while (card2 > 1)
    {
        ev_dig1 = (card2 % 10);
        ev_sum += ev_dig1;
        card2 = (card2 / 10) / 10;
    }


    total = ev_sum + odd_sum1;

    if (total % 10 == 0)
    {
        char* card_type = type(original_card);
        printf("%s", card_type);
        return 0;
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}


//functions
char *type(long long num1)
{
    char *card_type;

    while (num1 >= 100)
    {
        num1 = num1 / 10;
    }

    if (num1 == 34 || num1 == 37)
    {
        card_type = "AMEX\n";
        return card_type;
    }
    else if (num1 >= 40 && num1 <= 49)
    {
        card_type = "VISA\n";
        return card_type;
    }
    else if (num1 == 51 || num1 == 52 || num1 == 53 || num1 == 54 || num1 == 55)
    {
        card_type = "MASTERCARD\n";
        return card_type;
    }
    else
    {
        card_type = "INVALID\n";
        return card_type;
    }
}
