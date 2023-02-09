//Вариант 6 задача 19

#include <iostream>
#include <string>
#include <algorithm>


std::string change_symbols(std::string str)
{
   char target_symbol = 'a';
   char replace_symbol = 'b';
   std::replace(str.begin(), str.end(), target_symbol, replace_symbol);
   return str;
}



int main() {
    std::string str = "Crystal Method";
    str = change_symbols(str);
    std::cout << "\n" << str;
}
