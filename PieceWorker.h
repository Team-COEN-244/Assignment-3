#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include <string>
#include "Employee.h"


class PieceWorker : public Employee 
{
private:
    double wage;
    int pieces;

public:
    PieceWorker(std::string, std::string, std::string, int, double);
    void setPieces(int);
    int getPieces()const;
    void setWage(double);
    double getWage() const;
    virtual std::string toString() const override;
    virtual double earnings() const override;
};
#endif // PIECEWORKER_H
