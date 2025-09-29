#include <stdio.h>
#define MAX_LENGTH 20
main()
{
    char names[5][2][MAX_LENGTH] = {
        {"Alan", "Turing"},
        {"John", "von Neumann"},
        {"Grace", "Hopper"},
        {"Donald", "Knuth"},
        {"Tim", "Berners-Lee"}
    };
    int row;
    for (row = 0; row < 5; row++)
        printf("%d) %s %s\n", row + 1, names[row][0], names[row][1]);
}
