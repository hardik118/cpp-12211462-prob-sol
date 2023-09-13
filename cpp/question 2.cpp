//	Write a C program that opens a directory called "ACHIEVER" and creates 3 files inside directory,
// the finally reads the content and display the names of the files without using ls command. 
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    system("mkdir -p ACHIEVER");

    system("touch ACHIEVER/hardik1.txt");
    system("touch ACHIEVER/hardik2.txt");
    system("touch ACHIEVER/hardik3.txt");
    DIR *dir;
    struct dirent *dp;

    dir = opendir("ACHIEVER");
    printf("Files saved in the directory:\n");

    while ((dp= readdir(dir)) != NULL) {
        if (dp->d_type == DT_REG) {  
            printf("%s\n", dp->d_name);
        }
    }

    closedir(dir);

    return 0;
}

