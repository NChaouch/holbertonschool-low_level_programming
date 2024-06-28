#include "main.h"
#include <string.h>
/**
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{

	while (*src[n] != '\0')
	{
		*dest[n] = *src[n];
		src++;
		dest++;
	}

	*dest = '\0';
}
