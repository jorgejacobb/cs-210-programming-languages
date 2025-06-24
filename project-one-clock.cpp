#include <iostream>
#include <iomanip>
using namespace std;

// Student: Jorge Fernando Moreno Jacob
// SNHU
// Project: CS 210 Project One – Chada Tech Clocks
// May 21, 2025

// start with the clock class to handle both 12-hour and 24-hour formats
class Clock {
private:
    int hour;
    int minute;
    int second;

public:
    // constructor to initialize the time values
    Clock(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    // add one hour
    void addHour() {
        hour = (hour + 1) % 24;
    }

    // add one minute and adjust hour if needed
    void addMinute() {
        minute++;
        if (minute == 60) {
            minute = 0;
            addHour();
        }
    }

    // add one second and adjust minute if needed
    void addSecond() {
        second++;
        if (second == 60) {
            second = 0;
            addMinute();
        }
    }

    // display time in 12-hour format with AM/PM
    void display12Hour() {
        int h = hour % 12;
        if (h == 0) h = 12;
        string ampm = hour < 12 ? "AM" : "PM";
        cout << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second << " " << ampm;
    }

    // display time in 24-hour format
    void display24Hour() {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second;
    }
}; 

// display the option MENU to the user
void printMenu() {
    cout << "**************************\n";
    cout << "* 1 - ADD ONE HOUR       *\n";
    cout << "* 2 - ADD ONE MINUTE     *\n";
    cout << "* 3 - ADD ONE SECOND     *\n";
    cout << "* 4 - EXIT PROGRAM       *\n";
    cout << "**************************\n";
}

// print both clocks side by side as required
void displayClocks(Clock c) {
    cout << "**************************     **************************\n";
    cout << "*     12-Hour Clock     *     *     24-Hour Clock     *\n";
    cout << "*     ";
    c.display12Hour();
    cout << "     *     *     ";
    c.display24Hour();
    cout << "     *\n";
    cout << "**************************     **************************\n";
}

// main loop to run the clock menu
int main() {
    Clock clock;
    int choice;

    do {
        displayClocks(clock);
        printMenu();
        cin >> choice;

        switch (choice) {
            case 1: clock.addHour(); break;
            case 2: clock.addMinute(); break;
            case 3: clock.addSecond(); break;
            case 4: cout << "Exiting program...\n"; break;
            default: cout << "Invalid option. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}

