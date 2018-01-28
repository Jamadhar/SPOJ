#include <iostream>
#include <fstream>

int main()
{
	char character;

	while (std::cin >> character)
	{
		if (std::cin.eof())
			break;
		else
		{
			if (isalpha(character))
			{
				int	charNumber = (character - 'A') / 3 - ((character == 'S') || (character == 'V') || (character >= 'Y')) + 2;
				std::cout << charNumber;
			}
			else
				std::cout << character;
		}
	}
	
	return 0;
}

/* Em C
#include <stdio.h>
#include <ctype.h>

int main(void)
{
char c;

while(scanf("%c", &c) != EOF)
{
if (isalpha(c))
printf ("%d", (c - 'A')/3 - ((c == 'S') || (c == 'V') || (c >= 'Y')) + 2);
else
putc(c, stdout);
}

return 0;
}
*/