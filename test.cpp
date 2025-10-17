#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

double findsalary(double Pay_Rate, double Hrs_Worked);

void readfile(double workerArray[10] [4], string nameArray[10]) // read the data from the file into the arrays. 10 rows 3 columns
{
    string Name;
    double Hrs_Worked, Pay_Rate;
    int row = 0;
    ifstream infile("ch8_Ex17Data.txt");
    while (infile >> Name >> Hrs_Worked >> Pay_Rate && row < 10)
    {
            nameArray[row] = Name; //Name is separate Salary is weekly pay
            workerArray[row] [0] = Hrs_Worked; 
            workerArray[row] [1] = Pay_Rate;
            workerArray[row][2] = findsalary(Pay_Rate, Hrs_Worked);
            row++; 
    }
}

void printTable(double workerArray[10] [4], string nameArray[10])
{
    cout << "Name   Hrs Worked  Pay Rate    Salary" << endl;
     
    for (int row = 0; row < 10; row++) //Cout the table
    {
        cout << nameArray[row] << " "; 
        for (int column = 0; column < 3; column++)
        {
            cout << setw(10) << fixed << setprecision(2) << workerArray[row] [column] << " ";
    
        }
        cout << endl;
    }
}

double findsalary(double Pay_Rate, double Hrs_Worked) //determine the weekly pay. hours worked is hours worked in a week
{
    if(Hrs_Worked <= 40)
    {
        return Pay_Rate * Hrs_Worked; 
    }
    else
    {
     return 40 * Pay_Rate + (Hrs_Worked - 40) * Pay_Rate * 1.5; 
    }
}
double findaveragesalary(double workerArray[10] [4]) //a function to output the average salary of all employees 10 rows 3 columns
{
    double sum = 0;
    double AvgSalary;
    for (int row = 0; row < 10; ++row)
    {
    sum += workerArray[row][2];
    }
    AvgSalary = sum / 10; 
    cout << "Average Salary: $" << AvgSalary << endl;
    return AvgSalary;
}

void find_outlier_pay(double workerArray[10] [4], double AvgSalary, string nameArray[10]) //output the names of all the employees whose pay is greater than or equal to the average weekly pay
{
    cout << "Salary Greater than Avg:" << endl;
    for(int i = 0; i < 10; ++i)
    {
    if (workerArray[i] [2] > AvgSalary)
    cout << nameArray[i] << " ";
    }
    cout << endl;
}

int main() 
{
    string nameArray[10], Name;
    double workerArray[10] [4];
    double Pay_Rate, Hrs_Worked, Salary, AvgSalary ;

    readfile(workerArray, nameArray);  // read the data from the file into the arrays.
    printTable(workerArray, nameArray);
    AvgSalary = findaveragesalary(workerArray);
    find_outlier_pay(workerArray, AvgSalary, nameArray); //output the names of all the employees whose pay is greater than or equal to the average weekly pay

    return 0;
}