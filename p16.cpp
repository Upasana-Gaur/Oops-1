/*Create a hotel room booking system where each room has attributes like room 
number, type (single/double), price, and availability status. The program should: 
• Use a class Room to store room details. 
• Use a pointer to a Room object to dynamically manage room records. 
• Allow users to book a room, cancel a booking, and view available rooms. 
• Ensure that a room cannot be double-booked. 
• Display a summary of all rooms, including their booking status. */
#include <iostream>
#include <string>
using namespace std;

class Room {
public:
    int roomNumber;
    string type;
    double price;
    bool isAvail;

    Room(int rNum, string rType, double rPrice)
        : roomNumber(rNum), type(rType), price(rPrice), isAvail(true) {}

    void displayRoomInfo() const {
        cout << "Room number: " << roomNumber
             << " Type: " << type
             << " Price: " << price
             << " Availability: " << (isAvail ? "Available" : "Booked") << endl;
    }

    void bookRoom() {
        if (isAvail) {
            isAvail = false;
            cout << "Room " << roomNumber << " has been booked for you" << endl;
        } else {
            cout << "Sorry, the room is already booked" << endl;
        }
    }
};

int main() {
    const int numberOfRooms = 5;
    Room* hotelRooms[numberOfRooms];
    hotelRooms[0] = new Room(101, "Single", 400.0);
    hotelRooms[1] = new Room(102, "Single", 450.0);
    hotelRooms[2] = new Room(103, "Double", 700.0);
    hotelRooms[3] = new Room(301, "Double", 800.0);
    hotelRooms[4] = new Room(201, "Suite", 1600.0);
    int choice;
    do {
        cout << "\n**************** HOTEL ROOM BOOKING SYSTEM *****************" << endl;
        cout << "PRESS 1: FOR DISPLAY ALL ROOMS" << endl;
        cout << "PRESS 2: BOOK A ROOM" << endl;
        cout << "PRESS 3: CANCEL BOOKING" << endl;
        cout << "PRESS 4: TO EXIT" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Available rooms:" << endl;
                for (int i = 0; i < numberOfRooms; i++) {
                    hotelRooms[i]->displayRoomInfo();
                }
                break;
            case 2: {
                int roomNum;
                cout << "Enter the room number to book: " << endl;
                cin >> roomNum;
                bool found = false;
                for (int i = 0; i < numberOfRooms; i++) {
                    if (hotelRooms[i]->roomNumber == roomNum) {
                        hotelRooms[i]->bookRoom();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Room " << roomNum << " not found." << endl;
                }
                break;
            }
            case 3: {
                int roomNum;
                cout << "Enter the room number to cancel booking: " << endl;
                cin >> roomNum;
                bool found = false;
                for (int i = 0; i < numberOfRooms; i++) {
                    if (hotelRooms[i]->roomNumber == roomNum) {
                        if (!hotelRooms[i]->isAvail) {
                            hotelRooms[i]->isAvail = true;
                            cout << "Booking for room " << roomNum << " has been canceled." << endl;
                        } else {
                            cout << "Room " << roomNum << " was not booked." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Room " << roomNum << " not found." << endl;
                }
                break;
            }
            case 4:
                cout << "Exiting successfully" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    for (int i = 0; i < numberOfRooms; i++) {
        delete hotelRooms[i];
    }
    return 0;
}