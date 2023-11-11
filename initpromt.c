#include "function.h"
#include "shelldata.h"
/**
 * initPrompt - This functn replaces the main loop of the
 * interactive prompt
 *
 * @mystrct: Struct for all
 *
 * Return: Buffer found
 **/
void initPrompt(shelldata_t *mystrct)
{
	char *buffer, **args, *env_path;

	signal(SIGINT, signatureHandler);
	while (1)
	{
		getInput(mystrct);

		env_path = getEnv("PATH");
		isCurrPath(env_path, mystrct);

		mystrct->env = env_path;
		buffer = parse_prompt();
		if (buffer == NULL)
		{
			display(mystrct->it_mode == 1 ? "exit\n" : "");
			free(env_path);
			break;
		}
		mystrct->n_cmd++;
		if (buffer[0] != '\n')
		{
			args = tokenize_words(buffer, " \t\n");

			mytype->thearguments = args;
			mytype->buf = buffer;
			patternAnalysis(mystrct, args);
			evaluate(args, mystrct, buffer);

			releaseMemoryPointer((void *) args);
		}
		releaseMemory((void *) buffer);
		releaseMemory((void *) env_path);
	}

}
