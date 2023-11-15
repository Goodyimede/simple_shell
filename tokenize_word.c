#include "function.h"
#include "shelldata.h"
/**
 * tokenize_words - function Splits a string into words base on a delimeter
 *
 * @string: string to be splitted
 * @del: Delimiter to be used
 *
 * Return: string pointer
 **/
char **tokenize_words(char *string, const char *del)
{
	unsigned int old_one, new_one;
	char **word, **temp, *token;

	old_one = sizeof(char *);
	word = malloc(old_one);
	if (word != NULL)
	{
		new_one = 1;
		token = strtok(string, del);
		while (token)
		{
			if (token[0] == '#')
				break;
			temp = _realloc(word, old_one, (new_one + 1) * sizeof(char *));
			old_one = (new_one + 1) * sizeof(char *);
			if (temp == NULL)
				break;
			word = temp;
			++new_one;

			word[new_one - 2] = malloc(_strlen(token) + 1);
			if (word == NULL)
			{
				free(word);
				free(temp);
			}

			if (word[new_one - 2] != NULL)
			{
				_strcpy(word[new_one - 2], token);
			}
			token = strtok(NULL, del);
			temp = NULL;
		}
		word[new_one - 1] = NULL;
	}
	return (word);
}
