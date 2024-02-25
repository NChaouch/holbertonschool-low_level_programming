#include "main.h"
/**
 * jack_bauer - writes every minute of the day
 *
 */
void jack_bauer(void)
{
	int hour, hour2, minutes, minutes2;

	for (hour = '0' ; hour <= '2' ; hour++)
	{
		for (hour2 = '0' ; hour2 <= '9' ; hour2++)
		{
			for (minutes = '0' ; minutes <= '5' ; minutes++)
			{
				for (minutes2 = '0' ; minutes2 <= '9' ; minutes2++)
				{
					if (!(hour == '2' && hour2 >= '4'))
					{
						_putchar(hour);
						_putchar(hour2);
						_putchar(':');
						_putchar(minutes);
						_putchar(minutes2);
						_putchar('\n');
					}
				}
			}
		}
	}
}
