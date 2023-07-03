#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
//MODIFICATION A RECUPERER DANS TEST_AS
int main()
{
	char	*input;

	while (1)
	{
		input = readline("shell>");
		//process user input
		free(input);
	}
	return 0;
}
