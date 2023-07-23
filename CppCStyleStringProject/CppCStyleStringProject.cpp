// CppCStyleStringProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
    int array[]{ 1, 2, 3, 4 };

    char str[] = "World";
    

    //str = "Good by"; // error!
    
    //str[5] = '$';

    /*for (int i = 0; i < 12; i++)
        std::cout << str[i] << " ";*/
    //std::cout << "\n";


    char* str1;
    str1 = new char[strlen("Hello ") + 1];
    strcpy(str1, "Hello ");

    strcat(str1, str);

    /*for (int i = 0; i < 5; i++)
        str1[i] = str[i];
    str1[5] = '\0';*/

    std::cout << str1 << "\n";

    char s1[] = "bb";
    char s2[] = "aaa";

    std::cout << strcmp(s1, s2) << "\n";

}
