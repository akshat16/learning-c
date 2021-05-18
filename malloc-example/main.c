#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    /* allocate memory for string */
    if ((str = (char *) malloc(10)) == NULL)
    {
        printf("Not enough memory to allocate buffer\n");
        exit(1);  /* terminate program if out of memory */
    }

    /* copy "Hello" into string */
    strcpy(str, "World!");

    /* display string */
    printf("Hello %s\n", str);

    /* free memory */
    free(str);

    return 0;
}
