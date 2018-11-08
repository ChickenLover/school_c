#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int sum = 0;
    //Здесь int i это переменная "итератора", число которое хранит номер итерации
    int i = 0;
    while(i < n){
        //Оператор ++ эквивалентен += 1 (a = a + 1; a += 1; a++; эквивалентны)
        i++;
        sum += i * i;
    }
    printf("sum is %d\n", sum);
}
