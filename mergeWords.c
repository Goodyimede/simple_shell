#include "function.h"
#include "shelldata.h"
/**
 * mergeWords - this function Join 3 words with
 * a delimitar / spearator
 * @wo1: Word1 to join
 * @wo2: Word2 to join
 * @wo3: Word3 to join
 * @de1: as the Separator between the words
 *
 * Return: a string
 **/
char *mergeWords(char *wo1, char *wo2, char *wo3, const char *de1)
{
	int size1, size2, size3, de1_size;
	char *joint;

	size1 = size2 = size3 = de1_size = 0;

	if (wo2 != NULL)
		size2 = _strlen(wo2);
	else
		wo2 = "";

	if (wo1 != NULL)
		size1 = _strlen(wo1);
	else
		wo1 = "";
	if (wo3 != NULL)
		size3 = _strlen(wo3);
	else
		wo3 = "";
	if (de1 != NULL)
		de1_size = _strlen((char *)de1);
	else
		de1 = "";

	joint = malloc(size1 + de1_size + size2 + de1_size + size3 + 2);
	if (joint == NULL)
	{
		return (NULL);
	}
	joint = _strcpy(joint, wo1);
	joint = _strcat(joint, (char *)de1);
	joint = _strcat(joint, wo2);
	joint = _strcat(joint, (char *)de1);
	joint = _strcat(joint, wo3);
	joint = _strcat(joint, "\n");

	return (joint);
}
