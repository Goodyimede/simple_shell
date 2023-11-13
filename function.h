#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>

#include "shelldata.h"

extern char **environ;

void start(shelldata_t *mystrct);
int number(int num);
char *stringify(int numbe);
int Numeric(unsigned int numb);
int hasLetter(char *string);
char **tokenize_words(char *string, const char *del);
char *mergeWords(char *w1, char *w2, char *w3, const char *del);
char *parse_prompt(void);
void initpromt(shelldata_t *mystrct);
void signatureHandler(int num);
int writeCharacter(char character);
int display(char *message);
int displayError(char *message);
void getInput(shelldata_t *mystrct);
int writeCharacterToFD(char chap, int fil_d);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int outputToFD(char *message, int fil_d);
int Executable(char *filename);
int File(char *fname);
char *exchange(shelldata_t *mystrct, int *id, char *word);
int writeCharacterToFD(char cha, int fil_d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *subEnv(shelldata_t *mystrct, char *envi_var);
void patternAnalysis(shelldata_t *mystrct, char **args);
char *handle_pattern(shelldata_t *mystrct, char *words);
char *subtituteValue(shelldata_t *info, int *id, char *str);
void releaseMemory(void *pointer);
void releaseMemoryPointer(void **pointer);
void binaryExit(shelldata_t *mystrct, char **args);
int manageNumbers(shelldata_t *mystrct, char *argument);
void run(char *cmd, char **argu, shelldata_t *mystrct, char *buffer);
int getCurrentDir(char *command, char **argu, char *buff, shelldata_t *mystrct);
void issue(shelldata_t *mystrct);
char *selectMessage(shelldata_t mystrct);
void additionalError(shelldata_t *mystrct, char *more);
char *getEnv(const char *variable);
char *select(char *drtname, shelldata_t *mystrct);
void CurrentPath(char *path, shelldata_t *mystrct);
void fetchFullEnv(void);
void binaryEnv(shelldata_t *mystrct, char **args);
int systemFunction(shelldata_t *mystrct, char **args);
int verifyBuiltin(shelldata_t *mystrct, char **args);
void evaluate(char **args, shelldata_t *mystrct, char *buffer);
int _atoi(char *s);
int main(int acc, char **avv);
char *selectMessage(shelldata_t mystrct);
int number(int numb);
char *parse_prompt(void);
int manageNumbers(shelldata_t *mystrct, char *argument);
void releaseMemory(void *thepointer);

#endif
