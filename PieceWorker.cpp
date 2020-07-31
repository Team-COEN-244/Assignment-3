#include<iomanip>
#include <stdexcept>
#include <string>
#include <sstream>
#include"PieceWorker.h"

PieceWorker::PieceWorker(std::string first_name, std::string last_name, std::string ssn, int pieces_, double wage_) : Employee(first_name, last_name, ssn)
{
    setPieces(pieces_);
    setWage(wage_);
}

void PieceWorker::setPieces(int pieces_)
{
    if (pieces_ < 0)
        throw std::invalid_argument("The number of pieces must be >=0");
    pieces = pieces_;
}

int PieceWorker::getPieces() const
{
    return pieces;
}

void PieceWorker::setWage(double wage_)
{
    if (wage_ <= 0.0)
        throw std::invalid_argument("The wage cannot be less or equal than 0.");
    wage = wage_;
}

double PieceWorker::getWage() const
{
    return wage;
}

double PieceWorker::earnings() const
{
    return getWage() * getPieces();
}

std::string PieceWorker::toString() const
{
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Employee::toString()
        << "\nNumber of sold pieces: " << getPieces()
        << "\nWage: " << getWage();
    return output.str();
}
