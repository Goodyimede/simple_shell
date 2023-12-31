#include "function.h"
#include "shelldata.h"
/**
 * initiatePrompt - This function represents the main loop of the
 * interactive prompt
 *
 * @mystrct: Structure of general information
 *
 * Return: Buffer gotten from stdin or NULL if EOF was found
 **/
void initiatePrompt(shelldata_t *mystrct)
{
	char *buffer, **args, *env_path;

	signal(SIGINT, signatureHandler);
	while (1)
	{
		getInput(mystrct);

		env_path = getEnv("PATH");
		CurrentPath(env_path, mystrct);

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

			mystrct->thearguments = args;
			mystrct->buf = buffer;
			patternAnalysis(mystrct, args);
			evaluate(args, mystrct, buffer);

			releaseMemoryPointer((void *) args);
		}
		releaseMemory((void *) buffer);
		releaseMemory((void *) env_path);
	}

}
