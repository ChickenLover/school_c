#include<stdio.h>

int main(){

    int a = 7;
    int b = 8;
    char c = 'a';


    //Чтобы вывести что-то в консоль, используется команда printf
    //Для того чтобы сделать перенос строки, используется "\n"
    printf("Hello world!\n");
    
    //printf расшифровывается как print formatted, тобеж 
    //"форматированный вывод". Форматированный он, потому что первый 
    //аргумент команды printf (то что ставится на первое место в скобках) это
    //"форматная строка". В форматной строке можно указать как вы можете отформатировать
    //эту строку при выводе информации
    //Пример:
    printf("This string will output itself and the value of 'a'\nThe value of 'a' is %d \n", a);
    //В строке выше мы, в нашей форматной строке, указали что в том месте строки где стоит %d будет
    //стоять значение целочисленной переменной (d = decimal). Мы подали в printf нашу переменную a
    //Ее значение и будет подставлено на место %d
    
    //Если вам нужно вывести больше одного значения, используйте больше %
    //Через запятую нужно уже подать не одну переменную, а две
    printf("The value of 'a' is %d\n The value of 'b' is %d \n", a, b);

    //Вывод других типов, остальные "форматные коды" (то что идет после процента) вы можете нагуглить
    printf("The value of 'c' is %c\n", c);

    return 0;
}