/*
 * twecho
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static char **duplicateArgs(int argc, char **argv)
{
	//making char** of copied array, size of argc+1 because end should be NULL and starts at index of 1, not 0 because it reads Twecho at the 0 index thus there are argc+1 amount of things that need to be held
	char **copiedArgs = (char **)malloc((argc+1) * sizeof(char *));

	//argv[argc] is NULL pointer	
	copiedArgs[argc] = NULL;

	//check return value of malloc(), if null print error and exit
	if(copiedArgs == NULL) {
		 perror("malloc returned NULL");
		 exit(1);
	}

	//loop through each element up to but not including argc, because argc is NULL (looping through second array on diagram)
	for(int i=0; i<argc; i++) {
		//at each index of second array, need to find length of string it points to
		int length = strlen(argv[i]);

		//at each index of copiedArgs, need to create another pointer poitining to an array the size of the string at that index, we do not yet have the string itself, just the size
		copiedArgs[i] = (char *)malloc((length+1) * sizeof(char));

		//check return value of malloc(), if null print error and exit
		if(copiedArgs[i] == NULL) {
			perror("malloc returned NULL");
			exit(1);
		}
	
	//working horizontally, and then larger for loop increments down to next spot
	//strcpy strings from original array to copied, and toupper() them, run until you hit NULL pointer
		char *s = argv[i];
		char *t = copiedArgs[i];
		while(*s != '\0') {
			*t = toupper(*s);
			s++;
			t++;
		}
		//incremented to last spot, but loop doesn't run again so we must make last pointer to NULL of the string
		*t = '\0';
	}

	//return copiedArgs because that's our type of the function, char **
	return copiedArgs;	
	
	

}

static void freeDuplicatedArgs(char **copy)
{
	//free everything malloc()ed first: free all individual strings, then free overall array
	//free individual strings, running until you hit the \0 (null) of the individual string, signifies end of string
	for(int i =0; copy[i] != NULL; i++){
		free(copy[i]);
	}

	//free overall array
	free(copy);

}

/*
 * DO NOT MODIFY main().
 */
int main(int argc, char **argv)
{
    if (argc <= 1)
        return 1;

    char **copy = duplicateArgs(argc, argv);
    char **p = copy;

    argv++;
    p++;
    while (*argv) {
        printf("%s %s\n", *argv++, *p++);
    }

    freeDuplicatedArgs(copy);

    return 0;
}
