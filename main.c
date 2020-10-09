#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int times;
    int total = 0;
    printf("How many numbers: ");
    scanf("%d", &times);
    for (int i = 1; i <= times; ++i)
    {
      int j;
      printf("Enter a number? ");
      scanf("%d", &j);
      total+=j;
    }
    printf("The sum of the 3 numbers is %d\n", total);
    return 0;
}
