#include <iostream> // for std::cout

using namespace std;
int main()
{
    cout << "Enter an integer: ";
    int num{0}; //define variable num
    cin >> num;

    cout << "Enter another integer: ";
    int num2{0}; //define variable num2
    cin >> num2;

    cout << num << " + " << num2 << " is " << num + num2 << '\n';
    cout << num << " - " << num2 << " is " << num - num2 << '\n';
    return 0;
}
