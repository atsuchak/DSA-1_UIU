#include <bits/stdc++.h>
using namespace std;

struct Player {
    string name, playing_position, club;
    int age, rating;
    double yearly_salary;
    Player* next;

    Player(string name, string playing_position, int age, int rating, int yearly_salary, string club) {
        this->name = name;
        this->playing_position = playing_position;
        this->age = age;
        this->rating = rating;
        this->yearly_salary = yearly_salary;
        this->club = club;
        next = NULL;
    }
};

Player* pHead = NULL;

struct Team {
    string name;
    int year_of_formation;
    double yearly_rev;
    Team* next = NULL;
    
    Team(string name, int year_of_formation, double yearly_rev) {
        this->name = name;
        this->year_of_formation = year_of_formation;
        this->yearly_rev = yearly_rev;
        next = NULL;
    }
};

Team* tHead = NULL;

bool searchTeam(string team_name) {
    Team* temp = tHead;

    while(temp != NULL && temp->name != team_name) temp = temp->next;

    if(temp == NULL) return 0;
    else return 1;
}

void addPlayer(string name, int age, int rating, double salary, string position, string club) {
    Player* newPlayer = new Player(name, position, age, rating, salary, club);

    newPlayer->next = pHead;
    pHead = newPlayer;
}

void deletePlayer(string player_name, string team_name) {
    if(searchTeam(team_name)) {
        Player* curr = pHead;
        Player* prev = NULL;

        if(pHead == NULL) {
            cout << "No player contracts!" << endl;
            return;
        }

        while(curr->name != player_name) {
            prev = curr;
            curr = curr->next;
        }

        if(prev != NULL) prev->next = curr->next;
        else if(prev == NULL) pHead = pHead->next;

        delete curr;

        cout << "Player deleted successfully" << endl;
    } else {
        cout << "Player not found\n";
    }
}

void addTeam(string name, int formation, double rev, int pos) {
    Team* newTeam = new Team(name, formation, rev);

    if(pos < 1) {
        cout << "Invalid postion" << endl;
        return;
    }

    if(pos == 1) {
        newTeam->next = tHead;
        tHead = newTeam;
        return;
    }

    Team* temp = tHead;
    while(temp->next != NULL && -pos > 1) temp = temp->next;

    Team* temp2 = temp->next;
    temp->next = newTeam;
    newTeam->next = temp2;
}

void deleteTeam(string team_name) {
    Team* temp = tHead;

    while(temp != NULL && temp->name != team_name) temp = temp->next;

    Team* curr = tHead;
    Team* prev = NULL;

    if(tHead == NULL) {
        cout << "Team list empty" << endl;
        return;
    }

    while(curr->name != team_name) {
        prev = curr;
        curr = curr->next;
    }

    if(prev != NULL) prev->next = curr->next;
    else if(prev == NULL) tHead = tHead->next;

    delete curr;
}

void viewPlayer(string club_name) {
    Player* temp = pHead;
    if(pHead == NULL) {
        cout << "No player contracts!" << endl;
        return;
    }

    cout << "List of players in contract:" << endl;
    while(temp != NULL) {
        if(temp->club == club_name) {
            cout << temp->name << endl;
            cout << "Age: " << temp->age << ", ";
            cout << "Rating: " << temp->rating << ", ";
            cout << "Salary: " << temp->yearly_salary << ", ";
            cout << "Position: " << temp->playing_position << endl;
        }
        temp = temp->next;
    }
}

void viewTeam() {

    if(tHead == NULL) {
        cout << "League is empty" << endl;
        return;
    }

    Team* temp = tHead;

    cout << "List of Teams: " << endl;
    while (temp != NULL){
        cout << temp->name << endl;
        cout << "Year: " << temp->year_of_formation << endl;
        cout << "Revenue: " << temp->yearly_rev << endl;
        
        viewPlayer(temp->name);

        temp = temp->next;
        cout << endl;
    }
    
}

void swapTeam(int a, int b) {
    
    Team* temp1 = tHead;
    while(temp1 != NULL && --a > 0) temp1 = temp1->next;

    Team* temp2 = tHead;
    while(temp2 != NULL && --b > 0) temp2 = temp2->next;

    if(temp1 == NULL || temp2 == NULL) {
        cout << "Postion not found!" << endl;
        return;
    }

    swap(temp1->name, temp2->name);
    swap(temp1->year_of_formation, temp2->year_of_formation);
    swap(temp1->yearly_rev, temp2->yearly_rev);
}

int main() {

    cout << "La Liga Database Initializing..." << endl << endl;
    cout << "What do you want to do? " << endl;
    cout << "1. Create club " << endl;
    cout << "2. Delete club " << endl;
    cout << "3. View Club info " << endl;
    cout << "4. Swap Clubs " << endl;
    cout << "5. Add player " << endl;
    cout << "6. Delete player " << endl;
    cout << "7. Exit" << endl;

    int choice;

    string team_name;
    int team_formation, team_position;;
    double team_revenue;

    string palyer_name, player_position, player_club;
    int player_age, player_rating;
    double player_salary;

    int a, b;

    do {
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            getline(cin, team_name);
            
            cout << "Enter Year of Formation: ";
            cin >> team_formation;
            cin.ignore();

            cout << "Enter Yearly Revenue: ";
            cin >> team_revenue;
            cin.ignore();

            cout << "Enter position in the list: ";
            cin >> team_position;
            cin.ignore();

            addTeam(team_name, team_formation, team_revenue, team_position);
            break;
        case 2:
            cout << "Enter team name to be deleted: ";
            getline(cin, team_name);    

            deleteTeam(team_name);

            cout << "Team deleted successfully." << endl;
            break;
        case 3:
            viewTeam();
            break;
        case 4:
            cout << "Which two positions do you want to swap?" << endl;
            cin >> a >> b;
            cin.ignore();

            swapTeam(a, b);

            cout << "Team swapped successfully" << endl;
            break;
        case 5:
            cout << "Player Name: ";
            getline(cin, palyer_name);

            cout << "Age of Player: ";
            cin >> player_age;
            cin.ignore();

            cout << "Player rating: ";
            cin >> player_rating;
            cin.ignore();

            cout << "Yearly Salary: ";
            cin >> player_salary;
            cin.ignore();

            cout << "Position: ";
            getline(cin, player_position);

            cout << "Club contract: ";
            getline(cin, player_club);

            addPlayer(palyer_name, player_age, player_rating, player_salary, player_position, player_club);
            break;
        case 6:
            cout << "Enter the name of the player to be deleted: ";
            getline(cin, palyer_name);
            
            cout << "Enter the Team name of the player: ";
            getline(cin, player_club);

            deletePlayer(palyer_name, player_club);
            break;
        case 7:
            cout << "Destroy football league!! Good Bye" << endl;
            break;
        default:
            break;
        }

        cout << endl;
    } while(choice != 7);

    return 0;
}