#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#define pi=3.14;

int main() {
    const char* s1 = "IWILLPLACEDINTHEMULTINATIONALCOMPANYTHATWILLBEMYDREAMCOMETRUEAFTERL";
    const char* s2 = "THATWILLBEMYDREAMCOMETRUE";
    int m = open("file1.txt", O_WRONLY | O_CREAT, 0644);
    write(m, s1, strlen(s1));
    int size=(strlen(s1)-strlen(s2));
    off_t a = lseek(m,size , SEEK_SET);
    char buffer[2000];
    ssize_t  b_size = read(m, buffer, sizeof(buffer));
    printf("skipped  String is being displayed : %s\n", buffer);
    close(m);

    printf("sucessfully updated  s1 by skipping s2\n");

    return 0;
}

