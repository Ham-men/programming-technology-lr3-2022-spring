// lb3Test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Arithmetic_progression.h"
#include "Geometric_progression.h"
#include <fstream>
//доделать: чтение файла и конструктор копирования

void save_file(double a, double b, double c, double d, int type_file)//сделать сохранение
{

    if (type_file == 1)
    {

        ofstream fout("res_arf.txt");    //создаем поток 
        fout.close();
        fout.open("res_arf.txt", ios::app);  // создаём объект класса ofstream для дополнения записи
        fout << a << "\n"; // запись строки в файл
        fout << b << "\n"; // запись строки в файл
        fout << c << "\n"; // запись строки в файл
        fout << d; // запись строки в файл
        fout.close(); // закрываем файл
        cout << "данные сохранены в res_arf.txt";
    }
    if (type_file == 2)
    {

        ofstream fout("res_gem.txt");    //создаем поток и делаем файл пустым
        fout.close();
        fout.open("res_gem.txt", ios::app);  // создаём объект класса ofstream для дополнения записи
        fout << a << "\n"; // запись строки в файл
        fout << b << "\n"; // запись строки в файл
        fout << c << "\n"; // запись строки в файл
        fout << d; // запись строки в файл
        fout.close(); // закрываем файл
        cout << "данные сохранены в res_gem.txt";
    }
}

int read_file(int type_file)
{
    int a=0, b=0, c=0,d=0;
    if (type_file == 1)
    {
        ifstream in("res_arf.txt"); // окрываем файл для чтения
        if (in.is_open())
        {
            in >> a;
            in >> b;
            in >> c;
            in >> d;

        }
        else
        {
            cout << "Файла res_arf.txt нет";
            return 0;
        }
        in.close();
        cout << "первый член прогрессии  = " << a << "\n";
        cout << "разность прогрессии = " << b << "\n";
        cout << "кол-во элементов прогрессии = " << c << "\n";
        cout << "сумма = " << d << "\n";
    }
    if (type_file == 2)
    {
        ifstream in("res_gem.txt"); // окрываем файл для чтения
        if (in.is_open())
        {
            in >> a;
            in >> b;
            in >> c;
            in >> d;

        }
        else
        {
            cout << "Файла res_gem.txt нет";
            return 0;
        }
        in.close();
        cout << "первый член прогрессии  = " << a << "\n";
        cout << "отношение прогрессии = " << b << "\n";
        cout << "кол-во элементов прогрессии = " << c << "\n";
        cout << "сумма = " << d << "\n";
    }
    
}

bool is_digit(const char* S) {		//проверка на число
    const char* temp = "0123456789-+";
    unsigned point_count = 0;

    for (int i = 0; i < strlen(S); i++) {
        if ((i > 0) && (S[i] == '+' || S[i] == '-')) return false;
        if (S[i] == '.') {
            point_count++;
            if (point_count > 1) return false;
        }
        if (!strchr(temp, S[i])) return false;
    }
    return true;
}
int return_int()
{
    const int N = 256;
    char S[N];

    cin >> S;
    while (!is_digit(S)) {	//сделать проверку на ввод числа
        cout << "введите число = ";
        cin >> S;
    }
    cout << "ok\n";
    return atof(S);
}


int main()
{
    setlocale(LC_ALL, "Russian");
    system("cls");
    int n = 1, n2 = 0, res = 0;
    int a = 0, b = 0, c = 0;
    Arithmetic_progression *arf;
    Geometric_progression *gem;
    
    cout << "1) арифметическая прогрессия 2) геометрическая прогрессия 3) прочитать данные из файла 0)выход";

    while (n != 0) {
        cout << "\nномер операции = ";
        n = return_int();
        switch (n) {
        case 1:
            cout << "ариф. введите первый член прогрессии ";
            a = return_int();
            cout << "введите разность прогрессии ";
            b= return_int();
            cout << "введите кол-во элементов прогрессии ";
            c = return_int();
            arf = new Arithmetic_progression(a,b,c);
            res = arf->getSummProgres();
           
            cout << "сумма ариф. прогрессии = " << res << endl;
            cout << "сохранить результат? 1-да, 2-нет";
            while (1) {
                cout << "\nсохранение: номер операции = ";
                n2 = return_int();
                if (n2 == 1)
                {
                    save_file(a,b,c, res,1);
                    n2 = 0;
                    break;
                }
                    
                if (n2 == 2)
                {
                    n2 = 0;
                    break;
                }
                    
            }
            break;


        case 2:
           
            cout << "геом. введите первый член прогрессии ";
            a = return_int();
            cout << "введите отношение прогрессии ";
            b = return_int();
            cout << "введите кол-во элементов прогрессии ";
            c = return_int();
            gem = new Geometric_progression(a, b, c);
            res = gem->getSummProgres();

            cout << "сумма геом. прогрессии = " << res << endl;
            cout << "сохранить результат? 1-да, 2-нет";
            while (1) {
                cout << "\nсохранение: номер операции = ";
                n2 = return_int();
                if (n2 == 1)
                {
                    save_file(a, b, c, res,2);
                    n2 = 0;
                    break;
                }

                if (n2 == 2)
                {
                    n2 = 0;
                    break;
                }
            }
            break;
        case 3:
            while (1) {
                cout << "какой файл открыть: 1-ариф. прогрессия, 2-геом. прогрессия ";
                n2 = return_int();
                if (n2 == 1)
                {
                    read_file(1);
                    break;
                }
                if (n2 == 2)
                {
                    read_file(2);
                    break;
                }
            }
            
            break;

        default:break;
        }
    }
  
  
   
    return 0;
}