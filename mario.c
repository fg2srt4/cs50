#include <cs50.h>
#include <stdio.h>


int main(void)
{
    
int Height;
do {
    Height = get_int("How tall should it be?");
} while (Height < 1 || Height > 8);

for (int i = 0; i < Height; i++)
{
        for (int j = (Height - i); j > 0; j--){
            printf(" ");
        }
        for (int k = 0; k < (i + 1); k++){
            printf("#");    
        }
        printf("\n");
        
}
}
