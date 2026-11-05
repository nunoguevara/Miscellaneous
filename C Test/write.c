#include <unistd.h>

int main(void) {
    write(1, "Hello, Linux!\n", 14);
    return 0;
}
