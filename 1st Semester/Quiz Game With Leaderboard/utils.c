#include <string.h>
#include "utils.h"

// Removes newline from fgets input
void trimNewline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

// Replace spaces with underscores for safe file writing
void sanitizeName(char *out, const char *in) {
    int i = 0;
    while (in[i] != '\0') {
        out[i] = (in[i] == ' ') ? '_' : in[i];
        i++;
    }
    out[i] = '\0';
}
