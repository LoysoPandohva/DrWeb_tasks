#ifndef TRIMRIGHT_H
#define TRIMRIGHT_H

void trimRight(char *s){
    if(*s == 0) return;
    char *ptr_to_char = s;
    while (*s != 0) {
        if(*s != ' ') ptr_to_char = s + 1;
        s++;
    }
    *ptr_to_char = 0;
}

#endif // TRIMRIGHT_H
