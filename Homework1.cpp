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

    cout << "1 번째 : ";
    cin >> decimals[0];

    cout << "2 번째 : ";
    cin >> decimals[1];

    cout << "3 번째 : ";
    cin >> decimals[2];

    cout << "4 번째 : ";
    cin >> decimals[3];

    cout << "5 번째 : ";
    cin >> decimals[4];

    cout << " 총점 : " << calculateSum(decimals[0], decimals[1], decimals[2], decimals[3], decimals[4]) << endl;
    cout << " 평균 : " << calculateAverage(decimals[0], decimals[1], decimals[2], decimals[3], decimals[4]) << endl;
    return 0;
}

