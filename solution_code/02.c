// Print reverse number
#include <stdio.h>
int main(void){
    long long int input = 0, reverse = 0, _t = input;
    printf("Enter an integer : ");
    scanf("%lld", &input);
    _t = input < 0 ? -input : input;
    while(_t != 0){
        reverse = reverse * 10 + _t % 10;
        _t /= 10;
    }
    reverse *= input < 0 ? -1 : 1;
    printf("reverse : %lld\n", reverse);
}
