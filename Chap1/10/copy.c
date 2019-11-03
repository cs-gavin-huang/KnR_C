/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-11-03 19:42:08
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-11-03 19:42:08
 */
  
/*
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-10, page 20
 *
 * Write a program to copy its input to its output, replacing each tab
 * by \t, each backspace by \b, and each backslash by \\. This makes
 * tabs and backspaces visible in a unambiguous way.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("\\t");
        if (c == '\b')
            printf("\\b");
        if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
    }
    return EXIT_SUCCESS;
}