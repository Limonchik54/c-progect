#include <iostream>
using namespace std;

int check(int lenght) {
    while (lenght <= 0) {
        cout << "����� � ���� �����?!" << endl;
        cin >> lenght;
    }
    return lenght;
}

int main()
{
    setlocale(0, "");
    short menu, lenght, vector, choise;
    char symb;


    cout << "�������������� ������" << endl;
    cout << "�������� ������: " << endl;
    cout << "[1] - �����" << endl;
    cout << "[2] - �������" << endl;
    cout << "[3] - �������������" << endl;
    cout << "[4] - �����������" << endl;
    cout << "[5] - �������" << endl;
    cout << "[6] - ����� �����" << endl;
    cout << "[7] - ������" << endl;
    cin >> menu;
    short  i = 0;
    switch (menu)
    {

    case 1:
        cout << "������� ����� �����" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "������� ��� �����:\n [1] - ��������������\n [2] - ������������" << endl;
        cin >> vector;
        cout << endl;
        cout << "������� �������� �����" << endl << endl;
        cin >> symb;


        switch (vector)
        {
        case 1: {
            while (i < lenght)
            {
                cout << symb;
                i++;
            }
        }
              break;

        case 2: {
            while (i < lenght)
            {
                cout << symb << endl;
                i++;
            }
        }
              break;
        default: {
            cout << "������� ������ � �������� �����" << endl;
        }
               break;
        }
        break;
    case 2: {

        cout << "������� ����� ����� ��������" << endl << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << "������� �������� ��������" << endl << endl;
        cin >> symb;
        cout << "�������� ���\n [1] �����������\n [2] ������" << endl << endl;
        cin >> choise;
        switch (choise)
        {
        case 1: {

            while (i < lenght) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << " ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < lenght) {
                short l = 0;

                if (i == 0 || i == lenght - 1) {
                    while (l < lenght)
                    {
                        cout << symb << " ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << " ";
                    while (l < lenght - 2)
                    {
                        cout << "  ";
                        l++;
                    }
                    cout << symb << "  ";
                    cout << endl;

                    i++;
                }
            }
            break;
        }
        default:
            cout << "������� ������ � �������� �����" << endl;
            break;

        }
        break;
    }
    case 3: {
        int width;

        cout << "������� ����� ��������������" << endl;
        cin >> lenght;
        lenght = check(lenght);
        cout << endl;
        cout << "������� ������ ��������������" << endl;
        cin >> width;
        width = check(width);
        cout << endl;
        cout << "������� �������� ��������������" << endl << endl;
        cin >> symb;
        cout << "�������� ���\n [1] �����������\n [2] ������" << endl << endl;
        cin >> choise;


        switch (choise)
        {
        case 1: {

            while (i < width) {
                short l = 0;
                while (l < lenght)
                {
                    cout << symb << "  ";
                    l++;
                }
                cout << endl;
                i++;
            }
        }
              break;

        case 2: {

            while (i < width) {
                short l = 0;

                if (i == 0 || i == width - 1) {
                    while (l < lenght)
                    {
                        cout << symb << "  ";
                        l++;
                    }
                    i++;
                    cout << endl;
                }
                else {
                    cout << symb << "  ";
                    while (l < lenght - 2)
                    {
                        cout << "   ";
                        l++;
                    }
                    cout << symb << "   ";
                    cout << endl;

                    i++;
                }
            }
              break;
        }

        default: {
            cout << "������� ������ � �������� �����" << endl;
        }
               break;

        }
    }
          break;

    case 4: {
        int hight, begin, finish;

        cout << "������� ������ ������������" << endl;
        cin >> hight;
        hight = check(hight);
        cout << "������� �������� ������������" << endl << endl;
        cin >> symb;
        cout << "�������� ���\n [1] �����������\n [2] ������" << endl << endl;
        cin >> choise;
        lenght = hight * 2 - 1;
        begin = hight;
        finish = hight;

        switch (choise)
        {
        case 1: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 0; j <= lenght; j++) {
                    if (j < begin || j > finish) {

                        cout << " ";
                    }
                    else {
                        cout << symb;
                    }

                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;
        case 2: {
            for (i = 0; i < hight; i++)
            {
                for (int j = 1; j <= lenght; j++) {
                    if (i == hight - 1) {
                        cout << symb;
                    }
                    else if (j == begin || j == finish) {
                        cout << symb;

                    }
                    else {
                        cout << " ";
                    }

                }
                begin--;
                finish++;
                cout << endl;
            }
        }
              break;

        default: {
            cout << "������� ������ � �������� �����" << endl;
        }




        }



    }
          break;
    case 5: {
        cout << "������� ����� �����" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        cout << "������� �������� �������" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l % 2 == 1 || i % 2 == 1) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }



    }
          break;
    case 6: {
        cout << "������� ������ ���� ��� ���������" << endl;
        int lenght;
        cin >> lenght;
        lenght = check(lenght);
        cout << "������� �������� ���������" << endl << endl;
        cin >> symb;
        int hight;
        hight = lenght;
        short begin = 0, finish = lenght;



        for (int i = 0; i <= hight; i++)
        {
            for (int l = 0; l <= lenght; l++)
            {
                if (l == begin || l == finish)
                {
                    cout << symb << " ";
                }

                else if (l != begin || l < finish)
                {
                    cout << "  ";
                }

            }
            cout << endl;
            begin++;
            finish--;
        }

    }
          break;
    case 7: {
        cout << "������� ����� �������" << endl;
        cin >> lenght;
        lenght = check(lenght);
        if (lenght % 2 == 0) {
            lenght++;
        }
        int center;
        center = (lenght / 2);
        cout << "������� ��������" << endl << endl;
        cin >> symb;

        while (i < lenght) {
            short l = 0;

            while (l < lenght) {

                if (l == center || i == center) {
                    cout << symb << " ";

                }
                else {
                    cout << "  ";
                }
                l++;
            }
            i++;
            cout << endl;
        }

        break;
    }
          break;
    default:
        cout << "������� ������ � �������� �����" << endl;
        break;
    }

    int _; cin >> _;
    return 0;
}