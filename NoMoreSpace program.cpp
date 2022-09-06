#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;






int main()
{
    setlocale(LC_ALL, "ru");

    string path = "Proga.txt";
    fstream file;

    file.open(path, fstream::in | fstream::out | fstream::app);

    if (!file.is_open())
    {
        cout << "Файл по каким-то причинам не открыт" << endl;
    }
    else
    {
        cout << "Файл открыт" << endl;
        string str = "NoMoreSpace";
        int value;
        cout << "Чтобы занять место введите 1" << endl;
        cout << "Чтобы позырить на ту хуйню, которую вы сделали, нажмите 2" << endl;
        cin >> value;


        switch (value)
        {
        case 1:
            {
                for (int i = 0; i < 1000000; i++)
                {
                    for (int j = 0; j < 1000000; j++)
                    {
                        file << str << "_";
                    }
                }
            }

        case 2:
        {
            while (!file.eof())
            {
                str = "";
                file >> str;
                cout << str << endl;
            }
        }
        }
        
    }





    file.close();

    return 0;
}
