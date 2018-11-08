#include<stdio.h>

int main(){
    //Чтобы создать переменную нужно указать ее тип и имя
    int a; //В данном случае int - тип, целое число. a - имя переменной
    char character; //В данном случае char - тип, символ. character - имя переменной
    float not_decimal; //В данном случае float - тип, дробное число. not_decimal - имя переменной

    //Переменной можно сразу присвоить значение
    int b = 3;
    char other_character = '$';
    float floaty = 3.14;
    
    //Уже созданной переменной можно присвоить значение в любом куске кода (на то она и переменная)
    a = 42;
    character = 'b';
    not_decimal = 1.41;

    //Присваивать можно как константные значения (42, 'b', 1.41) так и
    //результаты операций, значения других переменных
    a = a + b;
    character = other_character;
    not_decimal = floaty * 2;
    return 0;
}
