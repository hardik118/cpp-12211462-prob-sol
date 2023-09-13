#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[500];
    int m; 
    m = open("new1.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    printf("Enter  your text { type '#' to end} \n");

    while (1) {
        char ch;
        read(STDIN_FILENO, &ch, 1); 

        if (ch == '#') {
            break;  
        }

        write(m, &ch, 1); 
    }

    close(m);

    printf("Input saved has been saved in file  output.txt.\n");

    return 0;
}

