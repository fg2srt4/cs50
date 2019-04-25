#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name, friend? \n");
    printf("Hello %s!\n", name);
}
