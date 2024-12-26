#include <iostream>
using namespace std;

double calculateAverage(double decimals1, double decimals2, double decimals3, double decimals4, double decimals5) {
    double sum = decimals1 + decimals2 + decimals3 + decimals4 + decimals5;
    return sum / 5;
}
double calculateSum(double decimals1, double decimals2, double decimals3, double decimals4, double decimals5) {
    double sum = decimals1 + decimals2 + decimals3 + decimals4 + decimals5;
    return sum;
}

int main()
{
    double decimals[5];

    cout << "First Number : ";
    cin >> decimals[0];

    cout << "Second Number : ";
    cin >> decimals[1];

    cout << "Third Number : ";
    cin >> decimals[2];

    cout << "Fourth Number : ";
    cin >> decimals[3];

    cout << "Fifth Number : ";
    cin >> decimals[4];

    cout << " Total : " << calculateSum(decimals[0], decimals[1], decimals[2], decimals[3], decimals[4]) << endl;
    cout << " Average : " << calculateAverage(decimals[0], decimals[1], decimals[2], decimals[3], decimals[4]) << endl;
    return 0;
}

