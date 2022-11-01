#include <iostream>
using namespace std;

int main()
{   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0 || num > 100)
    {
        cout << "Number out of range 0 - 100, please restart game." << endl;
    }

    int guess = 0;
    int counter = 0;

    while (true) 
    {
        cout << "Enter a guess: ";
        cin >> guess;
        counter++;

        if (guess == num) 
        {
            break;
        }
        
        guess > num ? (cout << "Your guess is bigger than number" << endl) : (cout << "Your guess is smaller than number" << endl);

    }
    cout << "Conratz, you won 1 000 000 $" << endl;
    cout << "You tried " << counter << " times before guessing the number" << endl;
}
