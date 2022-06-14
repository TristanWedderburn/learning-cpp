#include <iostream>
#include <string>

#include "readString.hpp"

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

int main() {
    std::cout << "Enter a string: " << std::flush;
    std::string s = lab1::readString();

    if (is_palindrome(s)) {
        std::cout << "The string " << std::quoted(s) << " is a palindrome.\n";
    } else {
        std::cout << "The string " << std::quoted(s) << " is NOT a palindrome.\n";
        reverse_in_place(&s);
        std::cout << "Reversed, it is " << std::quoted(s) << "\n";
    }
}
