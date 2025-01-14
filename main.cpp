#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char** argv) {
    char* str = (char*)malloc(sizeof(char) * SIZE);
    printf("Введите своё имя: n");
    fgets(str, SIZE, stdin);
    printf("Привет, %sn", str);
    free(str);  
    return 0;
}