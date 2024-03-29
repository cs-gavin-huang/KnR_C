/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-11-03 20:31:58
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-11-03 20:31:58
 */
/*
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 2-2, page 42
 *
 * Write a loop equivalent to the for loop above without using && or ||.
 * 
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * The original loop:
 * for (i=0;i<lim-1 && (c=getchar()) != '\n' && c != EOF; i++)
 *     s[i] = c;
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 512

int main(void)
{
    int i;
    int c, lim;
    char s[LIMIT];

    lim = LIMIT;
    i = 0;
    while(i < lim-1) {
        c = getchar();
        if (c == '\n')
            lim = 0;    /* We haven't encountered breaks yet. */
        else if (c == EOF)
            lim = 0;
        else
            s[i++] = c;
    }
    s[i] = '\0';        /* Terminate the string, */
    printf("%s\n", s);  /* and print it. */

    return EXIT_SUCCESS;
}