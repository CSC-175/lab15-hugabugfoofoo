#include<iostream>
#include <limits>
using namespace std;

// Function prototypes
void getInfo(int &num1, int &num2);
double computeWays(int, int);
double factorial(int number) {
    if (number == 0) {
        return 1;
    }else {
        return number * factorial(number - 1);
    }
}
void getInfo(int &num1, int &num2) {
    bool error;
    cout<<"How many balls (1-12) are in the pool to pick from? ";
    cin>>num1;
    error = cin.fail();

    while (num1>12) {
        cout << "Input Error!  There must be between 1 and 12 balls."<< endl;
        cout<<"How many balls (1-12) are in the pool to pick from? ";
        cin>>num1;
    }
    while (error) {
        cout<<"Input Error!"<<endl;
        cout<<"How many balls (1-12) are in the pool to pick from? ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin>>num1;
        error = cin.fail();
    }
    cout<<"How many balls (1-"<< num1 << ") will be drawn? ";
    cin>>num2;
    error = cin.fail();
    while (num2>num1) {
        cout << "Input Error!"<< endl;
        cout<<"How many balls (1-"<< num1 << ") will be drawn? ";
        cin>>num2;
    }
    while (error) {
        cout<<"Input Error!"<<endl;
        cout<<"How many balls (1-"<< num1 << ") will be drawn? ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin>>num2;
        error = cin.fail();
    }

}
double computeWays(int num1, int num2) {
double ways;
    double fnum1=factorial(num1);
    double fnum2=factorial(num2);
    double f12num=factorial(num1-num2);
    ways = (fnum2*f12num)/fnum1;
    return ways;
}
/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/



/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *
* Note that the computation is done in a way that does not require *
* multiplying two factorials together. This is done to prevent any *
* intermediate result becoming so large that it causes overflow.   *
********************************************************************/


/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


