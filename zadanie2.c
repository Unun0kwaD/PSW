/*Napisz  program  określający  rozmiar  plików  których  nazwy  zostały  wskazane 
przez użytkownika jako argumenty
./a.out /home/inf148099/bin/Programowanie/Optymalizcja_kombinatoryczna/zachlanny.cpp /home/inf148099/bin/Programowanie/Optymalizcja_kombinatoryczna/zachlanny

*/
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
     int i,n;
     printf ("%d\n", argc);
     for(i=1; i<argc; i++){
        int fd = open(argv[i],O_RDONLY);
         int siz=lseek(fd,0,SEEK_END);
        printf("Plik %d: %s \t rozmiar: %d bajtów\n", i, argv[i],siz);
    }
}
