
#include <iostream>
#include <string>



std::string words_delete(std::string str)
{
   char target_symbol = ' ';
   for(unsigned short i = 0; i<str.length(); i++) // Как в этой строке реализовать выражение на диапазоне и возможно ли чтобы параметр в for-range-declaration перенимал методы string???? 
   { //т.е реализвать цикл через for(auto&& c: str), чтобы "c" имел те же методы (find(),erase() и тд...), что и string
       if(str[i] == target_symbol)
       {
           str.erase(i+1, 1);
       }
   }
   return str;
}



int main() {
    std::string str = "Crystal Method";
    str = words_delete(str);
    std::cout << "\n" << str;
}
