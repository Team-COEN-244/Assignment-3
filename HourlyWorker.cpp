#include <iostream>
#include<iomanip>
#include <sstream>
#include "HourlyWorker.h"

HourlyWorker::HourlyWorker(std::string first_name, std::string last_name, std::string ssn, int hours_, double wage_) :Employee(first_name, last_name, ssn)
{
    setHours(hours_);
    setWage(wage_);
}
void HourlyWorker::setHours(int hours_)
{
    if (hours_ < 0)
        throw std::invalid_argument("The number of hours must be a positive integer.");
    hours = hours_;
}

int HourlyWorker::getHours() const
{
    return hours;
}

void HourlyWorker::setWage(double wage_)
{
    if (wage_ <= 0.0)
        throw std::invalid_argument("The wage cannot be less or equal than 0.");
    wage = wage_;
}

double HourlyWorker::getWage() const
{
    return wage;
}

double HourlyWorker::earnings() const
{
    int rest{ hours - 40 };
    rest = rest > 0 ? rest : 0;
    return (1.5 * rest) + (getWage() * 40);
}

std::string HourlyWorker::toString() const
{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Employee::toString()
        << "\nhours worked: " << getHours()
        << "\nwage: " << getWage();
    return output.str();
}