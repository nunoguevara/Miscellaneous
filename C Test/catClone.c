#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        char argsFailure[] = "ERROR: At least one argument is required!\n";
        write(1, argsFailure, sizeof(argsFailure));
        return 1;
    }

    int file = open(argv[1], O_RDONLY);
    if (file == -1) {
        char fileOpenFailure[] = "ERROR: Failed to open the file!\n";
        write(1, fileOpenFailure, sizeof(fileOpenFailure));
        return -1;
    }

    char buffer[2049];
    ssize_t readBytes;

    while((readBytes = read(file, buffer, 2048)) > 0) {
        buffer[readBytes] = '\0';
        write(1, buffer, readBytes);
    }
    
    if (readBytes == -1) {
        char errorRead[] = "ERROR: Failed to read file!\n";
        write(1, errorRead, sizeof(errorRead));
        return -1;
    }
    
    if (close(file) == -1) {
        char fileCloseFailure[] ="ERROR: Failed to close file properly!"; 
        write(1, fileCloseFailure, sizeof(fileCloseFailure));
        return -1;
    }

    return 0;
}
