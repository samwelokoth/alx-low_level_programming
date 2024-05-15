#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        if (atoi(argv[i]) == 9)
            argv[i] = "1";
    }

    return execvp("./gm", argv);
}
