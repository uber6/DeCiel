#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputnum;

    printf("Hello World!\n\nWhat number do you want to enter? ");
    scanf("%d", &inputnum);

    printf("\nYou entered %d.\n\nGoodbye.\n", inputnum);

    return 0;
}