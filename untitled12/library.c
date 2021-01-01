
#include <stdio.h>
#include <string.h>
main()
{
    char s[80];
    printf("Введите строку");
    gets(s);
    printf("Строка \n %s \n имеет длину %d символов \n",s,strlen(s));

}
