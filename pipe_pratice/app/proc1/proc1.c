#include <stdio.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        printf("Hello World from proc1 \n");
        sleep(2);
    }
}