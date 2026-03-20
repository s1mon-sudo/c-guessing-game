#include <iostream>

using namespace std;

int main() {
    int geheimnis = 7;
    int meinTipp = 0;

    cout << "--- Willkommen beim Zahlen-Raten! ---" << endl;
    cout << "Ich habe mir eine Zahl gemerkt. Rate mal, welche es ist." << endl;

    while (meinTipp != geheimnis) {
        cout << "Dein Tipp: ";
        cin >> meinTipp;

        if (meinTipp < geheimnis) {
            cout << "Zu klein! Versuch es nochmal." << endl;
        } 
        else if (meinTipp > geheimnis) {
            cout << "Zu gross! Die Zahl ist kleiner." << endl;
        }
    }

    cout << "Glueckwunsch! Du hast die " << geheimnis << " gefunden!" << endl;

    return 0;
}