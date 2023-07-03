#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main()
{
	char	*input;

	while (1)
	{
		input = readline("minishell>");
		//process user input
		free(input);
	}
	return 0;
}
