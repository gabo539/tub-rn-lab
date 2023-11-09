#include "utils.h"

int str_is_uint16(const char *str) {
    char *end;
    errno = 0;
    intmax_t val = strtoimax(str, &end, 10);

    if (errno == ERANGE || val < 0 || val > UINT16_MAX || end == str || *end != '\0') {
        return 0;
    }

    return 1;
}

int string_ends_with_empty_line(char* str) {
    int len = strlen(str);
    if (len < 4) return -1; // We are checking the last 4 bytes, so they should exist

    // str = ...\r\n\r\n
    //   len-4  ^      ^ len-1
    if (str[len - 4] != '\r' || str[len - 3] != '\n' || str[len - 2] != '\r' || str[len - 1] != '\n') {
        return 1;
    }

    return 0;
}
