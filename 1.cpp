//Задача 6 вариант 6

size_t words_counter(std::string str)
{
   size_t count_words = 0;
   char target_symbol = ' ';
    
   for(auto&& i : str)
   {
       if(i == target_symbol)
       {
           count_words++;
       }
   }
    
    count_words++;
    
    return count_words;
}

int main() {
    std::string str = "Lorem Ipsur Dolor Lorem Ipsur Dolor";
    size_t count_words = words_counter(str);
    std::cout << "\n" << count_words;
}
