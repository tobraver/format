#ifndef __FORMAT_H__
#define __FORMAT_H__

#include <iostream>

#define FMT_HEADER_ONLY
#include "third/fmt/core.h" // stdout, string
// #include "third/fmt/chrono.h" // dates, times
#include "third/fmt/ranges.h" // container 

#define FORMAT_PRINT     fmt::print
#define FORMAT_STRING    fmt::format

void format_init(void);
void format_deinit(void);

#endif // !__FORMAT_H__
