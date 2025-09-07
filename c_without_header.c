//This program shows , the need of headers in c and also how the header file works in c
// Minimal version without headers
int write(int fd, const char *buf, int count);  // manually declare write

int main() {
    const char msg[] = "Hello, World!\n";
    write(1, msg, 14);  // 1 = stdout
    return 0;
}
