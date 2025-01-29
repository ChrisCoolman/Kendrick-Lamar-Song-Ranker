// Chris Coleman
// 1/29/2025
// Kendrick Lamar Song Ranker
// Extra: later
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// KENDRICK LAMAR ALBUMS
vector<string> DAMN = {"BLOOD.", "DNA.", "YAH.", "ELEMENT.", "FEEL.", "LOYALTY.", "PRIDE.", "HUMBLE.", "LUST.", "LOVE.", "XXX.", "FEAR.", "GOD.", "DUCKWORTH."};
vector<string> userDAMN;
vector<string> SEC80 = {"Your Ethnicity", "Hol' Up", "A.D.H.D", "No Make-Up (Her Vice)", "Tammy's Song (Her Evils)", "Chapter Six", "Ronald Reagan Era (His Evils)", "Poe Mans Dreaams (His Vice)", "Chapter Ten", "Keisha's Song (Her Pain)", "Rigamortus", "K & C", "High", "Ab-Souls Outro"};
vector<string> userSEC80;
vector<string> GKMC = {"Sherane a.k.a Master Splinter's Daughter", "Don't Harm My Vibe", "Backseat Freestyle", "The Art of Peer Pressure", "Money Trees", "Poetic Justice", "Good Kid", "m.A.A.d city", "Swimming Pools (Drank)", "Sing About Me, I'm Dying of Thirst", "Real", "Compton"};
vector<string> userGKMC;
vector<string> TPAB = {"Wesley's Theory", "For Free? (Interlude)", "King Kunta", "Institutionalized", "These Walls", "u", "Alright", "For Sale? (Interlude)", "Momma", "Hood Politics", "How Much a Dollar Cost", "Complexion (A Zulu Love)", "The Blacker the Berry", "You Ain't Gotta Lie (Momma Said)", "i", "Mortal Man"};
vector<string> userTPAB;

// FUNCTIONS
void view();
void rankSongs();
void rankDAMN();
void rankSEC80();
void rankGKMC();
void rankTPAB();
void copy(const vector<string>& from, vector<string>& to) { // chat gpt helped me with this one, I have to pass it as a refrence using the & so it works globally
    to = from; // Direct assignment is more efficient
}


int main() {
    cout << "Welcome to the Kendrick Lamar song ranker!" << endl;
    copy(DAMN, userDAMN);
    copy(SEC80, userSEC80);
    copy(GKMC, userGKMC);
    copy(TPAB, userTPAB);
    bool condition = true;
    do {
        cout << "What would you like to do?" << endl;
        cout << "1. View songs in an album" << endl;
        cout << "2. Rank songs in an album" << endl;
        cout << "3. Exit program" << endl;
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: view(); break;
            case 2: rankSongs(); break;
            case 3: condition = false; break;
            default: condition = false; break;
        }
    } while(condition);
    cout << "Thank you for using the Kendrick Lamar song ranker!" << endl;
    return 0;
}

void view() {
    bool condition = true;

    do {
        cout << "Please select the album" << endl;
        cout << "1. DAMN" << endl;
        cout << "2. Section 80" << endl;
        cout << "3. Good Kid, M.A.A.D City" << endl;
        cout << "4. To Pimp a Butterfly" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;

        switch(choice) {
            case 1: {
                for (string song: DAMN) {
                    cout << song << endl;
                }
                break;
            }
            case 2: {
                for (string song: SEC80) {
                    cout << song << endl;
                }
                break;
            }
            case 3: {
                for (string song: GKMC) {
                    cout << song << endl;
                }
                break;
            }
            case 4: {
                for (string song: TPAB) {
                    cout << song << endl;
                }
                break;
            }
            default: {
                condition = false;
            }

        }
    } while(condition);
}

void rankSongs() {

    bool condition = true;
    do {
        cout << "Please select the album" << endl;
        cout << "1. DAMN" << endl;
        cout << "2. Section 80" << endl;
        cout << "3. Good Kid, M.A.A.D City" << endl;
        cout << "4. To Pimp a Butterfly" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;
        switch(choice) {
            case 1: rankDAMN(); break;
            case 2: rankSEC80(); break;
            case 3: rankGKMC(); break;
            case 4: rankTPAB(); break;
            default: condition = false; break;
        }
    }
    while(condition);
}

void rankDAMN() {
    bool condition = true;
    while(condition) {

        // Loop through the songs
        cout << "Here is the current ranking for the songs:" << endl;
        for(int i = 0; i < userDAMN.size(); i++) {
            cout << i + 1 << ": " << userDAMN.at(i) << endl;
        }
        // Ask user to enter the song number
        cout << "Enter the song you want to rank (enter 71 to exit): " << endl;
        int choice;
        cin >> choice;
        choice-=1;

        if(choice == 70) {
            condition = false;
            break;
        }

        // Error trap
        if(choice < 0 || choice >= userDAMN.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        // Ask user what they think of the song
        cout << "What rank do you want that song to be? 1 - " << userDAMN.size() << endl;
        int rank;
        cin >> rank;
        rank-=1;

        // Error trap
        if(rank < 0 || rank >= userDAMN.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        string selectedSong = userDAMN.at(choice); // pick the song
        userDAMN.erase(userDAMN.begin() + choice); // remove the song the user picked
        userDAMN.insert(userDAMN.begin() + rank, selectedSong); // put it in the slot
    }
}

void rankSEC80() {
    bool condition = true;
    while(condition) {

        // Loop through the songs
        cout << "Here is the current ranking for the songs:" << endl;
        for(int i = 0; i < userSEC80.size(); i++) {
            cout << i + 1 << ": " << userSEC80.at(i) << endl;
        }
        // Ask user to enter the song number
        cout << "Enter the song you want to rank (enter 71 to exit): " << endl;
        int choice;
        cin >> choice;
        choice-=1;

        if(choice == 70) {
            condition = false;
            break;
        }

        // Error trap
        if(choice < 0 || choice >= userSEC80.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        // Ask user what they think of the song
        cout << "What rank do you want that song to be? 1 - " << userSEC80.size() << endl;
        int rank;
        cin >> rank;
        rank-=1;

        // Error trap
        if(rank < 0 || rank >= userSEC80.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        string selectedSong = userSEC80.at(choice); // pick the song
        userSEC80.erase(userSEC80.begin() + choice); // remove the song the user picked
        userSEC80.insert(userSEC80.begin() + rank, selectedSong); // put it in the slot
    }
}

void rankGKMC() {
    bool condition = true;
    while(condition) {

        // Loop through the songs
        cout << "Here is the current ranking for the songs:" << endl;
        for(int i = 0; i < userGKMC.size(); i++) {
            cout << i + 1 << ": " << userGKMC.at(i) << endl;
        }
        // Ask user to enter the song number
        cout << "Enter the song you want to rank (enter 71 to exit): " << endl;
        int choice;
        cin >> choice;
        choice-=1;

        if(choice == 70) {
            condition = false;
            break;
        }

        // Error trap
        if(choice < 0 || choice >= userGKMC.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        // Ask user what they think of the song
        cout << "What rank do you want that song to be? 1 - " << userGKMC.size() << endl;
        int rank;
        cin >> rank;
        rank-=1;

        // Error trap
        if(rank < 0 || rank >= userGKMC.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        string selectedSong = userGKMC.at(choice); // pick the song
        userGKMC.erase(userGKMC.begin() + choice); // remove the song the user picked
        userGKMC.insert(userGKMC.begin() + rank, selectedSong); // put it in the slot
    }
}

void rankTPAB() {
    bool condition = true;
    while(condition) {

        // Loop through the songs
        cout << "Here is the current ranking for the songs:" << endl;
        for(int i = 0; i < userTPAB.size(); i++) {
            cout << i + 1 << ": " << userTPAB.at(i) << endl;
        }
        // Ask user to enter the song number
        cout << "Enter the song you want to rank (enter 71 to exit): " << endl;
        int choice;
        cin >> choice;
        choice-=1;

        if(choice == 70) {
            condition = false;
            break;
        }

        // Error trap
        if(choice < 0 || choice >= userTPAB.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        // Ask user what they think of the song
        cout << "What rank do you want that song to be? 1 - " << userTPAB.size() << endl;
        int rank;
        cin >> rank;
        rank-=1;

        // Error trap
        if(rank < 0 || rank >= userTPAB.size()) {
            cout << "BOOM! Error Trap ;)" << endl;
            continue;
        }

        string selectedSong = userTPAB.at(choice); // pick the song
        userTPAB.erase(userTPAB.begin() + choice); // remove the song the user picked
        userTPAB.insert(userTPAB.begin() + rank, selectedSong); // put it in the slot
    }
}


