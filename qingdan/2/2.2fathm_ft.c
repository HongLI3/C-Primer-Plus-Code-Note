#include <stdio.h>

int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6*fathoms;
    printf("They are %d feet in %d fathoms !\n",feet,fathoms);
    printf("Yes,I say %d feet!\n",6*fathoms);
    getchar ();
    return 0;
}