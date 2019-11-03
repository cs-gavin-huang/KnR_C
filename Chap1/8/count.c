/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-11-03 19:29:18
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-11-03 19:30:58
 */
/*
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-8, page 20
 *
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, nb, nt, nl;

    nb = nt = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    printf("%d %d %d\n", nb, nt, nl);
    return EXIT_SUCCESS;
}