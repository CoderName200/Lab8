#include <iostream>
#include <iomanip>
using namespace std;

char s[255] = "abcd\n";

ostream& endp(ostream& stream)
{
    char ss[255];
    static int k = 0;
    int i, j, c = 5;
    for (i = 0, j = 0; s[j] != '\0'; i++, j++)
    {
        ss[i] = s[j];
        if (ss[i] == '\n')
        {
            k++;
            if (k == c)
            {
                ss[i + 1] = '\n';
                stream << "\n-------------\n";
                i = -1;
            }
        }
    }
    if (i < 0)
    {
        ss[i + 1] = '\0';
        stream << ss;
    }
    return stream;
}


int main()
{   //Задание 1.1 Ответ: До явной отмены.
    /*cout << hex << 11 << endl;
    cout << 11 << endl;
    cout.unsetf(ios::hex);
    cout << 11 << endl;*/
    //Задание 1.2 Ответ: Округляет после точки
    //cout << fixed << setprecision(3) << (4.5559) << endl;
    //Задание 1.3
    /*cout.width(12);
    cout << 123.2937473173247 << endl;
    cout.width(12);
    cout << scientific << 123.2937473173247 << endl;
    cout.unsetf(ios::scientific);
    cout.width(12);
    cout << left << fixed << setfill('-') << 123.2937473173247 << endl;
    cout.width(12);
    cout << right << fixed << setfill('-') << 123.2937473173247 << endl;*/
    //Задание 3 
    /*cout << left << cout.flags() << endl;
    cout << right << cout.flags()<< endl;*/
    //Задание 4
    //cout << s << endp << endl;
    //Задание 5
    const int a = 1;
    cout << s  << endl;
}

