#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char command[100];

    snprintf(command, sizeof(command), "gcc -shared -fPIC -o liball.so *.c");
    system(command);

    return (0);
}
