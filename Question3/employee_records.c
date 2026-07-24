#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;
    char buffer[100];

    fd = open("employees.txt", O_CREAT | O_RDWR, 0644);

    if (fd < 0) {
        printf("File could not be opened.\n");
        return 1;
    }

    write(fd, "101 John\n", 9);
    write(fd, "102 Alice\n", 10);
    write(fd, "103 Bob\n", 8);

    lseek(fd, 9, SEEK_SET);

    write(fd, "102 Maria\n", 10);

    lseek(fd, 0, SEEK_SET);

    printf("Employee Records:\n");

    int bytes;

    while ((bytes = read(fd, buffer, sizeof(buffer) - 1)) > 0) {
        buffer[bytes] = '\0';
        printf("%s", buffer);
    }

    close(fd);

    return 0;
}
