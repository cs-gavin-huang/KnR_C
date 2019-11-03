/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-11-03 19:44:50
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-11-03 19:44:50
 */
/*
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-12, page 21
 *
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

int main(void)
{
    int c, prevblank;

    prevblank = FALSE;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (prevblank == FALSE)
                putchar('\n');
            prevblank = TRUE;
        } else {
            prevblank = FALSE;
            putchar(c);
        }
    }
    return EXIT_SUCCESS;
}
