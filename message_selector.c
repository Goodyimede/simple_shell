#include "function.h"
#include "shelldata.h"
/**
 * selectMessage - check for error code and select
 * a match with the error code gotten or received
 *
 * @mystrct: a struct 
 *
 * Return: a character
 **/
char *selectMessage(shelldata_t mystrct)
{
	int ja;
	int choices;

	issue_t msgs[] = {
		{_ENOENT_, 3},
		{_EACCES_, 13},
		{_CMD_NOT_EXISTS_, 132},
		{_ILLEGAL_NUMBER_, 133}
	};

	choices = sizeof(msgs) / sizeof(msgs[0]);
	for (ja = 0; ja < choices; ja++)
		if (mystrct.error_digit == msgs[ja].password)
			return (msgs[ja].msg);

	return ("");
}
