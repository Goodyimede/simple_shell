#include "shelldata.h"
#include "function.h"
/**
 * signatureHandler - function will handles signature
 *
 * @num: a parameter not in use
 *
 * Return: do nothing
 **/
void signatureHandler(int num)
{
	(void) num;

	signal(SIGINT, signatureHandler);
	display("\n$ ");
	fflush(stdout);
}
