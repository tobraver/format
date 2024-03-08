#include <iostream>
#include <vector>
#include "format.h"

int main(int argc, char* argv[])
{

    std::string str = FORMAT_STRING("hello {1} {0}", "!", "world");
    std::vector<int> ivec = { 1, 2, 3 };
    std::vector<std::string> svec = { "1", "2", "3" };

    FORMAT_PRINT("hello {}!\n", "world");
    FORMAT_PRINT("{} \n", str);
    FORMAT_PRINT("vector int {} \n", ivec);
    FORMAT_PRINT("vector string {} \n", ivec);

    return 0;
}
