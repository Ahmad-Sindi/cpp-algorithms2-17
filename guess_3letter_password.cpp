/* Algorithm Challenge & Problem Solving
 * 17 - Guess a 3-Letter Password (Brute Force)
 *
 * This program asks the user to enter a 3-letter uppercase password.
 * It then attempts to guess the password by generating every possible
 * combination from AAA to ZZZ using three nested loops.
 *
 * For each generated combination:
 *   - It prints the current attempt number.
 *   - It compares the generated word with the original password.
 * If the password is found, the program reports the match and the
 * number of attempts required to find it.
 *
 * This is a classic brute-force search demonstration.
 */

#include <iostream>
using namespace std;

string ReadPassword()
{
    string Password;
    cout << "Enter a 3-Letter Password (Capital Letters):\n";
    cin >> Password;
    return Password;
}

bool GuessPassword(string OriginalPassword)
{
    string Word = "";    // Holds the generated word
    int Counter = 0;     // Counts the number of attempts

    for (int i = 65; i <= 90; i++)     // First letter (A–Z)
    {
        for (int j = 65; j <= 90; j++) // Second letter (A–Z)
        {
            for (int m = 65; m <= 90; m++) // Third letter (A–Z)
            {
                Counter++; // Count each generated password attempt

                // Build the word
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(m);

                // Display attempt
                cout << "Trial [" << Counter << "] : " << Word << endl;

                // Check if the password matches
                if (Word == OriginalPassword)
                {
                    cout << "\nPassword Found: " << Word << "\n";
                    cout << "Found after " << Counter << " trial(s)\n";
                    return true; // Stop all loops once matched
                }

                Word = ""; // Reset for next attempt
            }
        }
    }

    return false; // If the password was never found
}

int main()
{
    GuessPassword(ReadPassword());
    return 0;
}
