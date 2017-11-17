#ifndef DEBUG_H
#define DEBUG_H

#include "def.h"
#include <vector>
#include <string>

namespace debug
{
    void printBoard(const std::vector<std::vector<def::int8>>& board, const std::string& path = "D:\\log.txt");
};

#endif // DEBUG_H