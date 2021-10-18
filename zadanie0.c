#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
     int i,n;
     printf ("%d\n", argc);
     for(i=0; i<argc; i++)
          printf("argument %d: %s\n", i, argv[i]);
}
// ./program0 /home/pawelm/Dokumenty/ANSI_c/PSW/siema
