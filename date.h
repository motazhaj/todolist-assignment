#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ctime>
#include <sstream>

#include "todoListHeaders.h"

// Function to parse a date string in the format "day-month-year" into tm var
tm parseDate(const std::string& dateStr);

#endif // DATE_H