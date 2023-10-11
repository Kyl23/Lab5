#include <stdio.h>
#include "../include/strcpy.h"

char *sstrcpy(char *dest, const char *src){
	/*complete this function*/
	char *i, *head = src;
	for(i = dest; *head != '\0'; i++, head++){
		*i = *head;
	}

	return dest;
}
