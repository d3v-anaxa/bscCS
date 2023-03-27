#include <stdlib.h>
int main(void){
    system("for f in *.c ; do gcc $f -o bin/${f%.c}.o ; done");
}
