#include <iostream>
using namespace std;

class FitnessTracker {
private:
    string username;
    int dailystepsgoal;
    int stepstaken;
    float caloriesburned;
    float caloriesburnedgoal;

public:
   
    FitnessTracker(string username) {
        this->username = username;
        this->dailystepsgoal = 0;
        this->stepstaken = 0;
        this->caloriesburned = 0.0;
        this->caloriesburnedgoal = 0.0;
    }

    
    void setSteps(int stepstaken, int dailystepsgoal) {
        this->stepstaken = stepstaken;
        this->dailystepsgoal = dailystepsgoal;
    }

    void calculateCalories() {
        float perStep = 0.5;
        caloriesburned = perStep * stepstaken;
        caloriesburnedgoal = dailystepsgoal * perStep;
        cout << "Expected Calories Burned: " << caloriesburnedgoal << endl;
        cout << "Actual Calories Burned: " << caloriesburned << endl;
    }

   
    void reminder() {
        float perStep = 0.5;
        if (dailystepsgoal > stepstaken) {
            int remain = dailystepsgoal - stepstaken;
            float remainingCalories = remain * perStep;
            cout << "You still need to burn " << remainingCalories << " calories to complete your daily goal." << endl;
        } else {
            cout << "You have achieved your goal!" << endl;
        }
    }

    
    void display() {
        cout << "Name: " << username << endl;
        cout << "Daily Steps Goal: " << dailystepsgoal << endl;
        cout << "Steps Taken: " << stepstaken << endl;
        cout << "Expected Calories Burned: " << caloriesburnedgoal << endl;
        cout << "Actual Calories Burned: " << caloriesburned << endl;
    }
};


int main() {
    FitnessTracker f("Laiba");

    int choice;
    do {
        cout << "1: LOG STEPS" << endl;
        cout << "2: DISPLAY CALORIES" << endl;
        cout << "3: DISPLAY PROGRESS" << endl;
        cout << "4: EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int stepstaken, dailystepsgoal;
                cout << "Enter the daily steps goal: ";
                cin >> dailystepsgoal;
                cout << "Enter the actual steps you have taken: ";
                cin >> stepstaken;
                f.setSteps(stepstaken, dailystepsgoal);
                break;
            }
            case 2:
                f.calculateCalories();
                break;
            case 3:
                f.display();
                f.reminder();
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
