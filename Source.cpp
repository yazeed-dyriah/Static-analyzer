#include <iostream>
#include <fstream>
#include<string>
using namespace std;


void ReadCodeFile(string fileName) {

    string line;

    string linesArray = { NULL };

    ifstream file(fileName);

    if (file.is_open()) {
        cout << "file is open\n";
        while (!file.eof()) {
            getline(file, line);
            cout << line << endl;
            linesArray.append(line);
        }

        //file.close();
    }
    else
        cout << "file is not open";
    file.close();

}





 

// create getReverse () function to get the reverse of the given number  
int getReverse(int num)
{
    int revNum = 0;

    //use while loop to get the reverse of original nummber (n)  
    while (num > 0)
    {
        revNum = (revNum * 10) + (num % 10);
        num = num / 10;
    }
    printf(" \n The reverse of the number = %d", revNum);
    return revNum;
}

// create getSum() function to get the sum of each digits of the given number  
int getSum(int num)
{
    int sum = 0; // initialize the sum variable with 0  
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    printf(" \n The sum of the given number = %d", sum);
    return sum;
}


int main()
{
    ReadCodeFile("eof.txt");

    return 0;


    
    // declare variable  
    int num, sum, revNum;
    cout << "Enter the number: ";
   // printf(" Enter the number: ");
    cin >> num;
    //scanf(" %d", &num);

    sum = getSum(num); // call getSum () function  
    revNum = getReverse(sum); // callgetReverse () function and argument sum  

    int result = sum * revNum;
    cout << "\n The product of %d and %d = %d ", sum, revNum, result;
   // printf(" \n The product of %d and %d = %d ", sum, revNum, result);

    // use if else to check condition  
    if (sum * revNum == num)
    {
        cout << "\n %d is a magic number. ", num;
       // printf(" \n %d is a magic number. ", num);
    }
    else
    {
        cout << "\n %d is not a magic number. ", num;
      //  printf(" \n %d is not a magic number. ", num);
    }
    
}


