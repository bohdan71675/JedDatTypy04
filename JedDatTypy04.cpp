
#include <iostream>

using namespace std;

int main()
{
    char x;
    bool lichy = false;
    cout << "Zadavej znaky zakoncena (*): " << endl;
    cin >> x;
    while (x != '*' && !lichy)
    {
        cout << "Znak co ho predchazi " << (char)(x - 1) << " jeho ASCII kode je " << (int)(x - 1) << endl;
        cout << "Znak je " << x << " jeho ASCII kod je " << (int)x << endl;
        cout << "Znak co ho predchazi " << (char)(x + 1) << " jeho ASCII kode je " << (int)(x + 1) << endl;

        if ((int)x % 2 != 0)
        {
            lichy = true;
        }
        cin >> x;
    }

}
