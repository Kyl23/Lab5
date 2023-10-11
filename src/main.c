#include <stdio.h>
#include <stdlib.h>
#include "../include/strcpy.h"
int main() {
	const char *src = "e84095316";
	char *dest = malloc(10 * sizeof(char));
	dest = sstrcpy(dest, src);
	printf("%s\n", dest);
	
	return 0;
}
