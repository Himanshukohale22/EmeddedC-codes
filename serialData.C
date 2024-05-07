


#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>

int main() {
    int serialfd = open("/dev/ttyUSB0", O_RDWR | O_NOCTTY | O_NDELAY);
    if (serialfd == -1)
        perror("Error opening the serial port");
    else
        fcntl(serialfd, F_SETFL, 0);

    fprintf(stdout, "Device is open, attempting read \n");

    fcntl(serialfd, F_SETFL, 0);
    char buf[11] = {0};
    read(serialfd, buf, 10);
    fprintf(stdout, "Buffer: %s", buf);
    close(serialfd);
    return 0;
}