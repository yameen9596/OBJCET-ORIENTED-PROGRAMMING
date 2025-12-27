#include <iostream>
using namespace std;

void length(char str[]) {
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        l++;
    cout << "Length of string: " << l << endl;
}

void reverse(char str[]) {
    int i, l = 0;
    for (i = 0; str[i] != '\0'; i++)
        l++;
    cout << "Reversed string: ";
    for (i = l - 1; i >= 0; i--)
        cout << str[i];
    cout << endl;
}

void concat(char str1[], char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++, i++)
        str1[i] = str2[j];
    str1[i] = '\0';
    cout << "Concatenated string: " << str1 << endl;
}

void frequency(char str[]) {
    char ch;
    cout << "Enter a character to find its frequency: ";
    cin >> ch;

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    cout << "Frequency of '" << ch << "' is: " << count << endl;
}

void substring(char str1[], char str2[]) {
    int i, j, k, found = 0;

    for (i = 0; str1[i] != '\0'; i++) {
        j = 0;
        k = i;
        while (str1[k] != '\0' && str2[j] != '\0' && str1[k] == str2[j]) {
            k++;
            j++;
        }
        if (str2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found)
        cout << "Substring found!" << endl;
    else
        cout << "Substring not found." << endl;
}

int main() {
    char str1[200], str2[200];
    int choice;

    cout << "Choose an operation to perform:\n";
    cout << "1. Length\n2. Reverse\n3. Concatenate\n4. Frequency\n5. Substring\n";
    cin >> choice;
    cin.ignore(); 

    switch (choice) {
        case 1:
            cout << "Enter a string: ";
            cin.getline(str1, 200);
            length(str1);
            break;

        case 2:
            cout << "Enter a string: ";
            cin.getline(str1, 200);
            reverse(str1);
            break;

        case 3:
            cout << "Enter first string: ";
            cin.getline(str1, 200);
            cout << "Enter second string: ";
            cin.getline(str2, 200);
            concat(str1, str2);
            break;

        case 4:
            cout << "Enter a string: ";
            cin.getline(str1, 200);
            frequency(str1);
            break;

        case 5:
            cout << "Enter main string: ";
            cin.getline(str1, 200);
            cout << "Enter substring to find: ";
            cin.getline(str2, 200);
            substring(str1, str2);
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

