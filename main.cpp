#include <iostream>
#include <fstream>
using namespace std;

int main() {
    cout << "How would you like to design your playlist?" << endl;
    cout << "1. Decade" << endl;
    cout << "2. Mood" << endl;
    cout << "3. Event" << endl;
    cout << "4. Artist" << endl;

    int result;
    string artist;
    cin >> result;
    int res;

    if (result == 1){
        cout << "Enter Year: " << endl;
        cin >> res;
    }
    else if (result == 2){
        cout << "Select Mood: " << endl;
        cout << "1. Happy: " << endl;
        cout << "2. Sad: " << endl;
        cout << "3. Chill: " << endl;
        cin >> res;

    }
    else if (result == 3){
        cout << "Enter Event: " << endl;
        cout << "Dinner Party" << endl;
        cout << "Wedding" << endl;
        cout << "Workout" << endl;
        cin >> res;
    }
    else if (result == 4){
        cout << "Enter Artist: " << endl;
        cin >> artist;
    }


    ifstream inFile;
    inFile.open("tracks_features.csv");











}
