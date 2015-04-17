#include <stdio.h>

int main(int argc, char** argv)

{

    int modified;

    char buffer[64];

    modified = 0;

    gets(buffer);        // 引发缓冲区溢出

    if (modified != 0)

    {

        printf("Congratulations, you pwned it.\n");

    }

    else

    {

        printf("Please try again.\n");

    }

    return 0;

}