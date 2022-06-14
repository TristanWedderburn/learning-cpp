# learning-cpp

### Section 1:

- every c++ program has a main function
- compiled language
- compiler is g++

#### Zero-cost abstraction
- Higher-level language than C without sacrificing performance
- Static type inference (i.e. auto), references, templates
- multi-paradigm language:
    - Oop
    - Functional

- value semantics
- Every type in c++ makes a copy of that var to pass in as a param to a function

#### Pointer Types
- `T x` declares c as type `T`
- `T *x` declares `x` as type “pointer to `T`”
- Unary `&` operator takes the address of any variable

#### Null pointer value
- special pointer value is `nullptr`
- use instead of `NULL`

#### Reference types
- `T &x` declares x to be of type “reference to `T`”
- Reference looks like a value but behaves like a pointer
- You can get a reference to any object
- References must be defined

#### Syntax Mnemonics
- dereferencing a pointer uses `->` or `*`
- `int& r;` declares a reference

- `std::` refers to a string type from the std namespace

- pass by reference opens up to modifying our argument
- we can protect ourselves from this type of error using the `const` keyword 

#### Const types
- Pass by `const` is an optimization on pass by value (for big items)
- primitives & cheaply copied can be passed by value
- heavy vars should be passed by `const` reference

- Good style tip: pass by pointer tells the reader to expect that a variable is modified by the function call

<a>cppreference.com</a>

#### Lab 1: Palindromes

For (size_t i=0; I < s.size(); ++I) {
    std::cout << std::toupper();
}

Ranged for loops:

For (char ch : s ) {
    std::cout << std::toupper(ch);
}

### Section 2: Declare before use

- `extern` storage-class specifier
- c++ can use header files to separate function & variable declarations

#### Separate compilation in a nutshell
- linker is used to link .o (which are generated from .cpp files) so we can declare functions separately and then resolve any unresolved references from the compiler

#### Inline function definitions
- `inline` keyword is used to define inline functions in the header file

#### Include guard
- using `#ifndef` + `#define` + `#endif` to avoid multiply defined functions

- we can also use `#pragma once`

#### Namespaces
- helps to avoid code if there a multiply defined/named functions

### Section 3: Classes, Constructors and Arrays & vectors

#### Type Aliases:
- `using aliasName = actualType;`
- We can use aliases to hide unimportant details: 
    - `using NATIVE_HANDLE = pthread_impl*;`
- Or we can emphasize important details:
    - `using int16 = short int;`

#### Classes:
- `class`
- Declare member variables (also, data members) of the class in the class body

- Public vs private
- `const` vs non-`const`

- `struct` is a class w/o member functions
