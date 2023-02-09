//Вариант 6 задача 10

#include <iostream>
#include <string>



std::string words_delete(std::string str)
{
   char target_symbol = ' ';
   for(unsigned short i = 0; i<str.length(); i++) 
   { 
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
