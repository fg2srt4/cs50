#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
   
    //check that height is between 1 and 8, if not reprompt for new input
    do
    {
        printf("Please enter a height: ");
        scanf("%d", &height);
    } 
    while (height < 1 || height > 8);
      
    //iterate over number of rows (height)
    for (int n = 0; n < height; n++)
    {
        //loop to print spaces before hashes
        for (int j = height - 1; j > n; j--)
        {
            printf(" ");           
        }
        //loop to print hashes
        for (int k = 0; k < n + 1; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
