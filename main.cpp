// fixing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int N_ELEMENTS = 100; //felesleges a constexpr, nem kell hogy ez az érték futásidõben változzon

int main()
{
    int* b = new int[N_ELEMENTS]; //Helytelen hivatkozás, helyes: N_ELEMENTS, nincs pointer
    std::cout << "1-100 ertekek duplazasa" << std::endl; //cout stringet vár, helyes használat: "1-100 ertekek duplazasa", sor nincs lezárva ;-vel
    for (int i = 0; i < N_ELEMENTS; i++) //for helyesen: for (int i = 1;i <= N_ELEMENTS; i++)
        {
            b[i] = (i+1) * 2; //értékadás  ==
        }
    for (int i = 0; i < N_ELEMENTS; i++)//for helyesen i<=100
        {
            std::cout << "Ertek: " << b[i] << std::endl;//helyes + << i illetve /n
        }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//nincs inicializálva
    for (int i = 0; i < N_ELEMENTS; i++)//; hianyzik
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
