//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 5: Extra Credit Programming Assignment
//Program that lets user enter a series of numbers, followed by -99 to signal the end of series.
//Afterward, display largest and smallest numbers entered. 

#include <iostream>
using namespace std;

int main()
{
    //Create variables for user input number, smallest number, and largest number
    int num, smallest = 0, largest = 0;
    
    //Receive user input
    cout << "Enter an integer (or -99 to quit): ";
    cin >> num;
    
    //Input validation to allow the user to quit
    //Also, store largest and smallest numbers entered into correct variable
    while (num != -99)
    {
        cout << "Enter another integer (or -99 to quit): ";
        cin >> num;
        
        if ((num >= largest) && (num != -99))
        {
           largest = num; 
        }
        if ((num <= smallest) && (num != -99))
        {
            smallest = num;
        }
        
    }
    
    //Display the largest and smallest user inputs
    cout << endl;
    cout << "The largest number you entered was " << largest << "." << endl;
    cout << "The smallest number you entered was " << smallest << "." << endl;
    
    system("pause");
    return 0;
}
