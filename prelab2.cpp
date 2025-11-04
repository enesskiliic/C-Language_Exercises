#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
/* I could not see Prelab, so i have to do prelab in the lab class.
   Because of that, i could not have enough time, so i use the algorithm library.
   I am sorry about that.
*/
using namespace std;

int main()
{
    ifstream inputFile("lab_input02-B.txt");
    int num;
    inputFile >> num;
    vector<int> numberArray(num);

    for (int i = 0; i < num; i++)
    {
        inputFile >> numberArray[i];
    }
    sort(numberArray.begin(), numberArray.end());
    int checkTime;
    inputFile >> checkTime;
    int checkNumber;
    int checkNumber2;
    int num1;
    int num2;
    for(int j = 0; j < checkTime/2; j++)
    {
        inputFile >> checkNumber;
        inputFile >> checkNumber2;
        for (int k = 0; k < num; k++)
        {
            if(numberArray[k] == checkNumber)
            {
                cout << "Yes " << (k+1) << endl;
                num1 = (k+1);
                break;
            }else if( numberArray[k] > checkNumber)
            {
                cout << "No " << (k+1) << endl;
                num1 = (k+1);
                break;
            }
            if(numberArray[k] == checkNumber2)
            {
                cout << "Yes " << (k+1) << endl;
                num2 = (k+1);
                break;
            }else if( numberArray[k] > checkNumber2)
            {
                cout << "No " << (k+1) << endl;
                num2 = (k+1);
                break;
            }

        }
        cout << (num2 - num1) << endl;
    }
}
