#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    int cents;
    float dollars;
    
    do {
        dollars = get_float("Enter change owed: ");
        cents = round(dollars * 100);
    } while (cents <= 0);
    
    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;
    
    printf("Coins given: %d\n", quarters + dimes + nickels + pennies);
    
}
