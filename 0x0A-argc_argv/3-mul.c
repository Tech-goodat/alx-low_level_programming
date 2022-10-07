#include <stdio.h>
#include <stdlib.h>

/**
 *  *main - a program that multiplies two numbers
 *   *
 *    *@argc: Argument counter
 *     *
 *      *@argv: argument string
 *       *
 *        *Return: 0
 *         *
 *          */

int main(int argc, char *argv[])
{
		int i, mul = 1;

			if (argc != 3)
					{
								printf("Error\n");

										return (-1);
											}

				else
						{
									for (i = 1; i < argc; i++)
												{
																mul *= atoi(argv[i]);
																		}

											printf("%d\n", mul);
												}

					return (0);
}
