#include <iostream>
#include <fstream>
#include<string>
using namespace std;



void ReadCodeFile(string eof) {

    string line;

    string linesArray = { NULL };

}

int isMagicNumber(int n) {
    int digit_sum = 0;
    while (n > 0 || digit_sum > 9) {
        if (n == 0) {
            n = digit_sum;
            digit_sum = 0;
        }
        digit_sum += n % 10;
        n /= 10;
    }
    return (digit_sum == 1 || digit_sum == -1 || digit_sum == 0);
}


int main()
{

    ifstream file("eof.txt", ios::in);
    if (file.is_open())
    {
        cout << "file is open\n \n";
    }
    else
        cout << "file is not open\n \n ";
   
    int count;
    string input;

    while (file >> input) {
        if ((input >= "a" && input <= "z") || (input >= "A" && input <= "Z")) {
            cout << "is a string \n ";
        }
        else {
            count = stoi(input);
            isMagicNumber(count);
            if (isMagicNumber(count)) {
                cout << count << " is magic number\n";
            }
            else {
                cout << count << " is not magic number\n";
            }
        }
    }
}