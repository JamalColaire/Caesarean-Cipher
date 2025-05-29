#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;

	while( (ch = getchar()) != EOF) // loop through the message
	{
		if( isalpha(ch))
		{
			if( toupper(ch)>='A' && toupper(ch)<='M') // Changing characters to upper case
				ch+= 13;
			else
				ch-= 13;
		}
		putchar(ch);
	}

	return(0);
}