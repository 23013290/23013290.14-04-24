#include <iostream>
#include <string>

using namespace std;

int main() {
    string gender, financial_state, hobby, personality, appearance;
    int age;

    cout << "Select your age range (18-25/26-35/36+): ";
    cin >> age;

    cout << "Select your gender (male/female): ";
    cin >> gender;

    cout << "Select your preferred hobby (sports/music/reading/sleeping): ";
    cin >> hobby;

    cout << "Select your preferred personality (outgoing/reserved/intellectual): ";
    cin >> personality;

    cout << "Select your preferred appearance (athletic/average/glamorous/fit): ";
    cin >> appearance;

    cout << "Select your financial state (in debt/has investments/well off with a plan/rich): ";
    cin >> financial_state;


    if (gender == "male" && age >= 18 && age <= 25) {
        if (hobby == "sports" && personality == "intellectual" && appearance == "fit" && financial_state == "rich")
            cout << "You have found a potential partner as you have met the criteria." << endl;
        else {
            cout << "Sorry, you do not meet the criteria to date me." << endl;
        }
    }

    return 0;
}
