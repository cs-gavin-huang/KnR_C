/*
 * @Description: 
 * @Author: you-know-who-2017
 * @Github: https://github.com/you-know-who-2017
 * @Date: 2019-11-03 19:24:03
 * @LastEditors: you-know-who-2017
 * @LastEditTime: 2019-11-03 19:24:03
 */
/*
 * The C Programming Language, second edition,
 * by Brian Kernighan and Dennis Ritchie
 *
 * Exercise 1-6, page 17
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Enter a char\n");
    printf("getchar() != EOF : %d\n", getchar() != EOF);
    return EXIT_SUCCESS;
}