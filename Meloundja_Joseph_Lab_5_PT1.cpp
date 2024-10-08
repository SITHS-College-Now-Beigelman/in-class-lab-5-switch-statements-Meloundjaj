//Meloundja
//10/8
//Lab 5

#include <iostream> 
#include <string>
using namespace std; 



   /* int num;
    cout << "Enter an integer between 0 and 7: ";
    cin >> num;
    cout << endl;

    switch (num)
    {
        case 0:
        case 1:
            cout << "Learning to use ";
        case 2:
            cout << "C++'s ";
        case 3:
            cout << "switch structure." << endl;
            break;
        case 4:
            break;
        case 5:
            cout << "This program shows the effect ";
        case 6:
        case 7:
            cout << "of the break statement." << endl;
            break;
        default:
            cout << "The number is out of range." << endl;
    }

    cout << "Out of the switch structure." << endl;
    return 0;*/

/*int main() 
{ 
    int score;
    char grade;
    cout << "Enter a score between 0 and 100: "; 
    cin >> score;
    switch (score / 10)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        case 6:
            grade = 'D';
            break;
        case 7:
            grade = 'C';
            break;
        case 8:
            grade = 'B';
            break;
        case 9:
        case 10:
            grade = 'A';
            break;
        default:
            cout << "Invalid test score." << endl;
    }
    cout << "Grade: " << grade << endl;
    return 0;
}*/

int main()
{
    //declaring varibles 
    double weightkg;
    double workoutDur;
    double walkSlow = 2;
    double walkQuick = 3;
    double jog = 8.8;
    string workoutType;

    cout << "Please input the amount of time you spent exercising (in minutes!)" << endl; // askingg for user input
    cin >> workoutDur;

    cout << "Please input your weight in kilograms!" << endl;
    cin >> weightkg;

    cout << "When walking slowly your MET is 2" << endl;
    cout << "When walking quickly your MET is 3" << endl;
    cout << "When jogging your MET is 8.8" << endl;

    cout << "What exercise would you like to do today? no spaces!" << endl;
    cin >> workoutType;
    if (workoutType == "walkingslowly")
    {
         cout << "Since you walked slowly, you burned: " << (workoutDur) * (walkSlow * 3.5 * weightkg) / 200 << " calories!"<< endl; // calculates the calories burned for walking slowly 

    }

    else if(workoutType == "walkingquickly")
    {
         cout << "since you walked quickly, you burned: " << (workoutDur) * (walkQuick * 3.5 * weightkg) / 200 << " calories!"<< endl; // calc for quick walking 
    }

    else if(workoutType == "jogging")
    {
        cout << "if you jogged, you burned: " << (workoutDur) * (jog * 3.5 * weightkg) / 200 << " calories!" << endl; // calc for jogging 
    }

    else
    {
        cout<< "error :(" << endl;
    }

  

   
    
    
    return 0;

}



