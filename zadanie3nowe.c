#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
// ./a.out /home/inf148099/bin/Programowanie/PSW/plik1 
int main(int argc, char* argv[])
{
    int fd = open(argv[1],O_RDWR);
    char line[100];
    int i =0;
    char buf
    while(read(fd, &buf,1
    
}
