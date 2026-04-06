#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int iNum, iVal, iSumDigits;
    system("cls");
    std::cout << "Input an integer number\r\n";
    std::cin >> iNum;
    iVal = abs(iNum); iSumDigits = 0;
    while (iVal > 0)
    {
        iSumDigits += iVal % 10;
        iVal /= 10;
    }
    std::cout << "The sum of digits of the number " << iNum << " is "
    		  << iSumDigits << "\r\n";
    if (iSumDigits % 9 == 0)
    {
        std::cout << "The number " << iNum << " divides by 9\r\n";
    }
    else
    {
        std::cout << "The number " << iNum << " does not divide by 9\r\n";
    }
    std::cin.ignore();
    std::cin.get();
}
