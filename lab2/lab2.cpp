#include <string>  

namespace lab2 {
bool is_palindrome(std::string s) {
        size_t end = s.size();
 
        for(size_t i=0; i < end/2; ++i) {
                if (s[i] != s[end-1-i]) {
                        return false;
                }
        }
        return true;
}
 
void reverse_in_place(std::string *s) {
        size_t end = s -> size();
        std::string &p = *s;
 
        for(size_t i=0; i < end/2; ++i) {
                std::swap(p[i], p[end-1-i]);
        }
}
}
