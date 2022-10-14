#include <iostream>
#include <clocale>
#include <cstring>

using namespace std;

class Train
{
    char punkt[20];// пункт назначения
    int num;//номер поезда
    double time;//время отправки
    int kupe; //купе
    int plac; //плацкарт
public:
    explicit Train (const char *_punkt = "Unknown", int _num = 0, double _time = 0.0, int _kupe = 0, int _plac = 0)
    {
        setPunkt(_punkt);
        setNum(_num);
        setTime(_time);
        setKupe(_kupe);
        setPlac(_plac);
    }
    void setPunkt(const char *_punkt)
    {
        strcpy(punkt, _punkt);
    }
    void setNum(int _num)
    {
        num=_num;
    }
    void setTime (double _time)
    {
        time=_time;
    }
    void setKupe (int _kupe)
    {
        kupe=_kupe;
    }
    void setPlac (int _plac)
    {
        plac=_plac;
    }
    void printInfo()
    {
        cout << "Пункт назачения: " << punkt << endl
            << "№ поезда: " << num << endl
            << "Время отправки: " << time << endl
            << "Общее число мест купэ: " << kupe << endl
            << "Общее число мест плацкарт: " <<plac << endl;
    }
};

class mas
{
    Train train[5]; //массив поездов
    int size; // кол-во поездов
public:
    mas() :
        size()
    {
    }

    void addTrain (Train _train)
    {
        if (size < 5)
            train[size++]=_train;
        else
            cout << "Error, array is full" << endl;
    }
    void printInfo()
    {
        for(int i = 0; i < size; i++)
        {
            cout<<i+1<<". ";
            train[i].printInfo();
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    const int len=5;
    Train train[len] = {
        Train("Kiev", 4, 22.44, 54, 23),
        Train("Zaporizhia", 7, 11.01, 40, 50),
        Train("Moskva", 16, 00.37, 70, 94),
        Train("St-Peterburg", 3, 07.56, 57, 49),
        Train("Doneck", 41, 14.08, 34, 28)
    };

    // создали просто пустой массив оболочку и все - он пустой;
    mas ms;

    // здесь надо было инициализировать массив-wrapper mas;
    for (int i = 0; i < len; ++i)
        ms.addTrain(train[i]);

    ms.printInfo();

    cin.get();
    return 0;
}
