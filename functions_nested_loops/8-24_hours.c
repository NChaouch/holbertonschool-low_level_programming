#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hr, hr2, min, min2;

	for (hr = '0' ; hr <= '2' ; hr++)
	{
		for (hr2 = '0' ; hr2 <= '9' ; hr2++)
		{
			for (min = '0' ; min <= '5' ; min++)
			{
				for (min2 = '0' ; min2 <= '9' ; min2++)
				{
					if (!(hr == '2' && hr2 >= '4'))
					{
						_putchar(hr);
						_putchar(hr2);
						_putchar(':');
						_putchar(min);
						_putchar(min2);
						_putchar('\n');
					}
				}
			}
		}
	}
}
