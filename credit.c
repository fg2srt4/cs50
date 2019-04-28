#include <stdio.h>
#include <cs50.h>

//declare function name to be used later
char *type(long long num1);


int main(void)
{
    //declare int and long names
    int total, odd_sum1 = 0, odd_dig1, ev_dig1, ev_sum = 0;
    long long card, card2, original_card;
    
    //get card numbers
    card = get_long("Number: ");
    card2 = card;
    original_card = card;
    
    //make sure card entered is at least 13 digits
    if (card < 1000000000000)
    {
        printf("INVALID\n");
        return 0;
    }

    //get every other digit for multiplication
    while (card > 1)
    {
        odd_dig1 = (((card / 10) % 10) * 2);
        
        //get individual digits if product is > 10
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

    //get every other digit not multiplied
    while (card2 > 1)
    {
        ev_dig1 = (card2 % 10);
        ev_sum += ev_dig1;
        card2 = (card2 / 10) / 10;
    }


    total = ev_sum + odd_sum1;
    
    //check to see if last digit in total == 0
    if (total % 10 == 0)
    {
        char *card_type = type(original_card);
        printf("%s", card_type);
        return 0;
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}


//function to determine card  type
char *type(long long num1)
{
    char *card_type;
    
    //get first 2 digits of card num
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
