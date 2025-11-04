#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ifstream inputFile("lab_input02-B.txt");
    int num;
    inputFile >> num;
    vector<int> numberArray(num);
    int change;

    for (int i = 0; i < num; i++)
    {
        inputFile >> numberArray[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (numberArray[j] > numberArray[j + 1])
            {
                change = numberArray[j];
                numberArray[j] = numberArray[j + 1];
                numberArray[j + 1] = change;
            }
        }
    }
    int checkTime;
    inputFile >> checkTime;
    int checkNumber;
    int checkNumber2;
    int num1;
    int num2;
    for (int j = 0; j < checkTime / 2; j++)
    {
        inputFile >> checkNumber;
        inputFile >> checkNumber2;
        for (int k = 0; k < num; k++)
        {
            if (numberArray[k] == checkNumber)
            {
                cout << "Yes " << (k + 1) << endl;
                num1 = (k + 1);
                break;
            }
            else if (numberArray[k] > checkNumber)
            {
                cout << "No " << (k + 1) << endl;
                num1 = (k + 1);
                break;
            }
        }
        for (int k = 0; k < num; k++)
        {
            if (numberArray[k] == checkNumber2)
            {
                cout << "Yes " << (k + 1) << endl;
                num2 = (k + 1);
                break;
            }
            else if (numberArray[k] > checkNumber2)
            {
                cout << "No " << (k + 1) << endl;
                num2 = (k + 1);
                break;
            }
        }
        cout << (num2 - num1) << endl;
    }
}
