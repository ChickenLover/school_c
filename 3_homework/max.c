#include <stdio.h>

int main(){
    //Заводим переменные и записываем их из консоли
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        printf("%d\n", a);
    }
    else {
        printf("%d\n", b);    
    }
    return 0;
}
