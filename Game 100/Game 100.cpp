// Game 100.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Player
{
    string name;
    int score;
    int result;

    bool invite()
    {
        cout << "\t\t\tThis is a mathematical logic game" << endl;
        cout << "\t\tYou have to hardly thinking before your action" << endl;
        return true;
    }
    bool whoIsPlaing()
    {
       
        cout << "\t\tEnter number in range from 0 to 5. If you will closer to a random number " << endl;
        cout << "\t\t  than a computer, then you start playing the main game first" << endl;
        cout << "\t\t===========================================================================" <<endl;
        return true;
    }
    int firstGame()
    {
        cout << "\t\t\tYour number is \t ";
        int c = 0;
        cin >> c;
        cout << endl;
        while (c > 5)
        {
            cout << "This is wrong! Try to again! This is wrong! Try to again! This is wrong! Try to again! This is wrong! Try to again!" << endl;
            cout << endl;
            cout << "\t\t\tYour number is\t  ";
            cin >> c;
        }
        return c;
    }
    int getRandomNumber1()             // Генерируем рандомное число между значениями 0 и 5.
    {
        int b = rand() % 5;

        cout << "\t\t The computer entered number " << b << endl;
        cout << endl;
        return b;
    }
    int getRandomNumber2()              // Генерируем рандомное число между значениями 0 и 5.
    {
        int b1 = rand() % 5;

        cout << "\t The independent computer number is " << b1 << endl;
        
        return b1;

    }
    bool weBegan()
    {
        cout << endl;
        cout << "\t\t======================================================================" << endl;
        cout << "\t\t\tWE BEGAN OUR MAIN GAME!" << endl;
        return true;
    }
    int yourStep(int step)
    {
        cout << "\tEnter number from 1 to 10:";
        cout << endl;
        cout << "\t Your number is \t";
        cin >> step;

        return step;
    }
    int getRandomNumber()             // Генерируем рандомное число между значениями 0 и 10.
    {
        int a = rand() % 9 + 1;

        cout << "\tComputer number is \t" << a << endl;

        return a;
    }
    int deside()
    {

        int FGame = firstGame();
        int GRNumber = getRandomNumber1();
        int GRNumber2 = getRandomNumber2();

        unsigned short k = 0;
        k = GRNumber2 - FGame;
        unsigned short l = 0;
        l = GRNumber2 - GRNumber;

        if (k < l)
        {
            cout << "Computer won, it is starting our game" << endl;
        }
        else if (k > l)
        {
            cout << "You won, you are starting our game" << endl;
        }
        else if (k == l)
        {
            cout << "Drawn game, you must repeat your game" << endl;
            firstGame();
            getRandomNumber1();
            if (k < l)
            {
                cout << "Computer won, it is starting our game" << endl;
                cout << endl;
            }
            else if (k > l)
            {
                cout << "You won, you are starting our game" << endl;
                cout << endl;
            }
            else if (k == l)
                cout << "Drawn game, you must repeat your game" << endl;
            cout << endl;
            firstGame();
            getRandomNumber1();
        }
        return 0;
    }

public:
    Player() : name(), score(0), result(0)
    {

    }
    void start()
    {
         bool info = invite();
    }
    string getName() 
    {   
        cout << "Enter your Name " << endl;
        return name;
    }
    void setName(string anyName)
    {
        name = anyName;
        cout << "Your name is: " << anyName; 
        cin >> anyName;
        cout << endl;
        cout << "\t\tDeare " << anyName << " we have to deside, who will play first" << endl;
        cout << "\t For this case you have to guess the number closest to the random number of the computer. " << endl;
        cout << endl;
    }
    void start2()
    {
        bool wIPlayng = whoIsPlaing();
    }
    int getScore()
    {
        return score;
    }
    void setScore(int anyScore)
    {
        score = anyScore;
    }
    int getResult()
    {
        int sum = 0;
        int dd = 0;
        int ff = 0;

        for (int count = 0; count <= 100; count++)
        {
            dd += yourStep(dd);
            ff += getRandomNumber();
            sum = (100 - (dd + ff));
            cout << "\t\tIntermediate state is:" << sum << endl;
            if (sum > 89)
            {
                cout << "You are win" << endl;
            }
            else if (sum >= 100)
            {
                break;
                cout << "The game is over" << endl;
            }
        }
        return sum;
    }

    void setResult(int anyResult)
    {
        result = anyResult;
    }
    void start3()
    {
        bool info3= weBegan();
    }

    /*int start4()
    {
        int step2=0;
        int info4 = yourStep(step2);
        return info4;
    }
    int start5()
    {
        int info5 = getRandomNumber();
        return info5;
    }*/

    int start6()
    {
        int info6 = deside();
        return info6;
    }
    
};



int main()
{
    srand(time(NULL));
    
     Player a;
    a.start();                   // Приветствие
    a.getName();                // Запрашиваем имя
    a.setName("");              // Выдает имя
    a.start2();                 // Кто играет первым?
    a.start6();                  // Введи номер до 5, комп вводит свой, кто побеждает
    a.start3();                 // Озвучивает начало игры
   // a.start4();                 // Введи цифру 1 - 10
   // a.start5();                 // Случайное число компа
    a.getResult();               // Игра
                                // Кто выиграл7, результат
                                // Хотите повторить?

     return 0;
    

    

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
