//Дана символьная строка. Удалить из нее все символы не являющиеся буквами.

#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char s[255];
    int i = 0;
    cout << "VVedite stroku :\n";
    cin.getline(s,255,'\n');
    while (i <= strlen(s))
    {
        if(isalpha(s[i])) //Функция isalpha проверяет аргумент, является ли он строчной или прописной буквой алфавита.

        cout << s[i];     //  cout<<*(s+i);
        i++;
    }

    system("pause");
    return 0;
}
