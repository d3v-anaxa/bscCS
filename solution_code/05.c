// check for palindrome
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    char *buffer;
    size_t buff_size = 64, len;
    buffer = (char *)malloc(buff_size * sizeof(char));
    if (buffer == NULL){
        perror("Unable to allocate buffer\n");
        exit(1);
    }
    printf("Enter string : ");
    len = getline(&buffer, &buff_size, stdin);
    for (int i = 0; i < len; i++)
    printf("%c\n", buffer[i]);
}
