#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//void minMax(int a, int b, int c) {
//    int min = a;
//    int max = a;
//
//    if (b < min)
//        min = b;
//    if (c < min)
//        min = c;
//
//    if (b > max)
//        max = b;
//    if (c > max)
//        max = c;
//
//    cout << "Min: " << min << endl;
//    cout << "Max: " << max << endl;
//}

//void find(int arr[], int size, int& minV, int& maxV, int& minI, int& maxI);

//void reverseSort(int arr[], int size);

//void count(int arr[], int size, int& pos, int& neg, int& zero);

void roll(int& d1, int& d2) {
    d1 = rand() % 6 + 1; 
    d2 = rand() % 6 + 1; 
}

void print(int d1, int d2) {
    cout << "Кубик 1: ";
    switch (d1) {
    case 1:
        cout << "⚀";
        break;
    case 2:
        cout << "⚁";
        break;
    case 3:
        cout << "⚂";
        break;
    case 4:
        cout << "⚃";
        break;
    case 5:
        cout << "⚄";
        break;
    case 6:
        cout << "⚅";
        break;
    }
    cout << endl;

    cout << "Кубик 2: ";
    switch (d2) {
    case 1:
        cout << "⚀";
        break;
    case 2:
        cout << "⚁";
        break;
    case 3:
        cout << "⚂";
        break;
    case 4:
        cout << "⚃";
        break;
    case 5:
        cout << "⚄";
        break;
    case 6:
        cout << "⚅";
        break;
    }
    cout << endl;
}

void play() {
    const int rounds = 5;
    int pTotal = 0, cTotal = 0;
    srand(time(NULL));

    for (int round = 1; round <= rounds; ++round) {
        cout << "Раунд " << round << endl;

        cout << "Ваш кидок:" << endl;
        int pd1, pd2;
        roll(pd1, pd2);
        print(pd1, pd2);
        int pScore = pd1 + pd2;
        pTotal += pScore;
        cout << "Ваша сума: " << pScore << endl;

        cout << "Кидок комп'ютера:" << endl;
        int cd1, cd2;
        roll(cd1, cd2);
        print(cd1, cd2);
        int cScore = cd1 + cd2;
        cTotal += cScore;
        cout << "Сума комп'ютера: " << cScore << endl;

        cout << endl;
    }

    if (pTotal > cTotal) {
        cout << "\033[32mВи перемогли!\033[0m" << endl;
    }
    else if (cTotal > pTotal) {
        cout << "\033[31mКомп'ютер переміг!\033[0m" << endl;
    }
    else {
        cout << "\033[33mНічия!\033[0m" << endl;
    }

    double avgPScore = static_cast<double>(pTotal) / rounds;
    double avgCScore = static_cast<double>(cTotal) / rounds;
    cout << "Середня сума за кидками (Ви): " << avgPScore << endl;
    cout << "Середня сума за кидками (Комп'ютер): " << avgCScore << endl;
}


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //1
    /*int num1, num2, num3;
    cout << "Введіть три цифри: ";
    cin >> num1 >> num2 >> num3;

    minMax(num1, num2, num3);*/

    //2

    /*int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    if (size <= 0) {
        cout << "Введено невірний розмір. Завершення роботи програми." << endl;
        return 1;
    }

    int arr[size];

    cout << "Введіть " << size << " ціліх числел:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int minV, maxV, minI, maxI;

    find(arr, size, minV, maxV, minI, maxI);

    cout << "Мінімальне значення: " << minV << " за індексом " << minI << endl;
    cout << "Максимальне значення: " << maxV << " за індексом " << maxI << endl;*/

    //3

    /*int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    if (size <= 0) {
        cout << "Введено невірний розмір. Вихід з програми." << endl;
        return 1;
    }

    int arr[size];

    cout << "Введіть " << size << " ціліх чисел:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    rev(arr, size);

    cout << "Масив, відсортований за спаданням:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    //4

    /*int size;
    cout << "Введіть розмір масиву: ";
    cin >> size;

    if (size <= 0) {
        cout << "Введено невірний розмір. Вихід з програми." << endl;
        return 1;
    }

    int arr[size];

    cout << "Введіть " << size << " ціліх чисел:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int pos = 0, neg = 0, zero = 0;

    count(arr, size, pos, neg, zero);

    cout << "Додатні числа рахуються: " << pos << endl;
    cout << "Від'ємні числа рахуються: " << neg << endl;
    cout << "Нульові числа рахуються: " << zero << endl;*/

    //5

    int choice;
    cout << "Ви хочете почати першими? (1-Так/2-Ні): ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        play();
    }
    else {
        play();
    }

    return 0;
}

//void find(int arr[], int size, int& minV, int& maxV, int& minI, int& maxI) {
//    minV = arr[0];
//    maxV = arr[0];
//    minI = 0;
//    maxI = 0;
//
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] < minV) {
//            minV = arr[i];
//            minI = i;
//        }
//        if (arr[i] > maxV) {
//            maxV = arr[i];
//            maxI = i;
//        }
//    }
//}

//void rev(int arr[], int size) {
//    for (int i = 0; i < size / 2; ++i) {
//        int temp = arr[i];
//        arr[i] = arr[size - 1 - i];
//        arr[size - 1 - i] = temp;
//    }
//}

//void count(int arr[], int size, int& pos, int& neg, int& zero) {
//    pos = 0;
//    neg = 0;
//    zero = 0;
//
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > 0) {
//            pos++;
//        }
//        else if (arr[i] < 0) {
//            neg++;
//        }
//        else {
//            zero++;
//        }
//    }
//}