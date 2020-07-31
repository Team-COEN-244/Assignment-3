#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include <string>
#include "Employee.h"

class HourlyWorker :public Employee
{
private:
    double wage;
    int hours;

public:
    HourlyWorker(std::string, std::string, std::string, int, double);
    void setHours(int);
    int getHours() const;
    void setWage(double);
    double getWage() const;
    virtual std::string toString() const override;
    virtual double earnings() const override; // calculate earnings
};

#endif // HOURLYWORKER_H