#include <iostream>

#if __has_include("Header.h")
#   include "Header.h"
#elif __has_include("OptionalHeader.h")
#   include "OptionalHeader.h"
#else
#error no source_location_support
#endif

#if !defined HEADER_VALUE
#   define HEADER_VALUE 3
#endif

#if !defined OPTIONAL_HEADER_VALUE
#   define OPTIONAL_HEADER_VALUE 4
#endif

int main(int argc, char** argv)
{
    ::std::cout << "HEADER_VALUE: '" << HEADER_VALUE << "'" << ::std::endl;
    ::std::cout << "OPTIONAL_HEADER_VALUE: '" << OPTIONAL_HEADER_VALUE << "'" << ::std::endl;
}