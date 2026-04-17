#include <iostream>
#include <string>
using namespace std;

class clsCalculator
{

private:

    float  _Result = 0;
    float  _LastNumber = 0;
    char   _LastOperation = 'n';
    string _OperationName = "Clear";

public:


    void clear()
    {
        _Result = 0;
        _LastNumber = 0;
        _LastOperation = 'n';
        _OperationName = "Clear";
    }

    void Add(float Number)
    {
        _LastNumber = Number;
        _Result += Number;
        _LastOperation = '+';
        _OperationName = "Adding";
    }

    void Subtract(float Number)
    {
        _LastNumber = Number;
        _Result -= Number;
        _LastOperation = '-';
        _OperationName = "Subtracting";
    }

    void Divide(float Number)
    {
        _LastNumber = Number;
        if(Number == 0)
            {
                _LastNumber = 0;
            }
        else
            {
                _Result /= Number;
            }

        _LastOperation = '/';
        _OperationName = "Dividing";
    }

    void Multiply(float Number)
    {
        _LastNumber = Number;
        _Result *= Number;
        _LastOperation = '*';
        _OperationName = "Multiplying";
    }

    float GetFinalResult()
    {
        return _Result;
    }

    void PrintResult()
    {
        cout<<"Result After "<< _OperationName <<" "<< _LastNumber   <<" is: "<<_Result<<endl;
    }


};

int main()
{
    clsCalculator calc1;

    calc1.clear();
    calc1.PrintResult();

    calc1.Add(12);
    calc1.PrintResult();

    calc1.Subtract(2);
    calc1.PrintResult();

    calc1.Multiply(3);
    calc1.PrintResult();

    calc1.Divide(6);
    calc1.PrintResult();

    return 0;
}
