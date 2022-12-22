#include "main.h"
/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    print_times_table(3);

	        _putchar('\n');

		    print_times_table(5);

		        _putchar('\n');

			    print_times_table(98);

			        _putchar('\n');

				    print_times_table(12);  

				        return (0);

}

 void print_to_98(int n)

{

		if (n >= 98)

				{

							while (n > 98)

											printf("%d, ", n--);

									printf("%d\n", n);

										}



			else

					{

								while (n < 98)

												printf("%d, ", n++);

										printf("%d\n", n);

											}

}
