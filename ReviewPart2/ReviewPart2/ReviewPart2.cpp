// ReviewPart2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <functional>
#include <random>
#include <ctime>
#include "SimpleUniquePointer.h"
#include "Address.h"
using namespace std;


int main()
{
    srand(time(nullptr));

    Address address;

    address.addAddress(".com");
    address.addAddress(".net");
    address.addAddress(".org");
    address.addAddress(".gov");
    address.addAddress(".biz");
    address.addAddress(".xyz");

    string cont = "x";

    auto pred = [cont](string str) -> bool {
        if (str.find(cont) != -1)
        {
            return true;
        }

        return false;
    };


    vector<string> results = address.filter(pred);



    //std::function<int(int, int)> add = [](int a, int b) -> int { return a + b; };
    //std::function<int(int, int)> mult = [](int a, int b) -> int { return a * b; };

    //std::vector < std::function<int(int, int)>> funcs;

    //funcs.push_back(add);
    //funcs.push_back(mult);


    //for (size_t i = 0; i < 5; i++)
    //{
    //    int x = rand() % 100;
    //    int y = rand() % 100;

    //    cout << x << " " << y << endl;
    //    cout << funcs[rand() % funcs.size()](x, y) << endl;

    //}

    /*SimpleUniquePointer test(5);

    SimpleUniquePointer t = std::move(test);

    cout << test.get() << endl;

    cout << *(test.get()) << endl;
    */
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
