#include<stdio.h>
void printF(){
    printf("This is struct\n");
};
typedef struct {
    int x : 10;
    // void (*Operation)() : printF;
    int (*pr)() : {
        printf("test\n");
        return 0;
    }
} example ;

int main(void){
    example exp;
    printf("%d", exp.pr);
}
