#include <iostream>
#include <regex>
#include <fstream>
#include <ctime>
#include <chrono>
#include <string.h>
#include <parser.h>

int main(int argc, char *argv[])
{
    std::vector<std::string> criteria;
    criteria.push_back("python");
    criteria.push_back("\\x43\\x2B\\x2B");
    parser parse(argv[1], criteria);
    parse.parse();
    parse.print_file(argv[2]);
    parse.print();
    return 0;
}
