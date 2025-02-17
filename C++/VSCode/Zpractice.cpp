#include <iostream>
#include <string>
using namespace std;

struct Evnt {
    int e_id;
    string e_nm;
    string e_dt;
    string e_vn;
};

Evnt e_list[100];
int cnt = 0;

void add_ev() {
    if (cnt < 100) {
        cout << "Adding new event...\n";
        cout << "Enter ID: ";
        cin >> e_list[cnt].e_id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, e_list[cnt].e_nm);
        cout << "Enter Date: ";
        getline(cin, e_list[cnt].e_dt);
        cout << "Enter Venue: ";
        getline(cin, e_list[cnt].e_vn);
        cnt++;
        cout << "Event added successfully!\n";
    } else {
        cout << "Event list is full!\n";
    }
}

void show_ev() {
    if (cnt == 0) {
        cout << "No events available." << endl;
        return;
    }
    cout << "Displaying all events...\n";
    for (int i = 0; i < cnt; i++) {
        cout << e_list[i].e_id << " - " << e_list[i].e_nm << " - " << e_list[i].e_dt << " - " << e_list[i].e_vn << endl;
    }
}

void del_ev(int x) {
    for (int i = 0; i < cnt; i++) {
        if (e_list[i].e_id == x) {
            for (int j = i; j < cnt - 1; j++) {
                e_list[j] = e_list[j + 1];
            }
            cnt--;
            cout << "Event deleted." << endl;
            return;
        }
    }
    cout << "Event not found." << endl;
}

void up_ev(int x) {
    for (int i = 0; i < cnt; i++) {
        if (e_list[i].e_id == x) {
            cin.ignore();
            cout << "New Name: ";
            getline(cin, e_list[i].e_nm);
            cout << "New Date: ";
            getline(cin, e_list[i].e_dt);
            cout << "New Venue: ";
            getline(cin, e_list[i].e_vn);
            cout << "Event updated." << endl;
            return;
        }
    }
    cout << "Event not found." << endl;
}

void search_ev(string y) {
    for (int i = 0; i < cnt; i++) {
        if (e_list[i].e_nm == y || to_string(e_list[i].e_id) == y) {
            cout << e_list[i].e_id << " - " << e_list[i].e_nm << " - " << e_list[i].e_dt << " - " << e_list[i].e_vn << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

int main() {
    int op, id;
    string q;
    do {
        cout << "1. Add\n2. Show\n3. Delete\n4. Update\n5. Search\n6. Exit\n";
        cout << "Enter option: ";
        cin >> op;
        cin.ignore();
        switch (op) {
        case 1: add_ev(); break;
        case 2: show_ev(); break;
        case 3: cout << "Enter ID: "; cin >> id; del_ev(id); break;
        case 4: cout << "Enter ID: "; cin >> id; up_ev(id); break;
        case 5: cout << "Enter ID/Name: "; cin.ignore(); getline(cin, q); search_ev(q); break;
        }
    } while (op != 6);
    return 0;
}
