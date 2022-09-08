// fixing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const int N_ELEMENTS = 100; //felesleges a constexpr, nem kell hogy ez az �rt�k fut�sid�ben v�ltozzon

int main()
{
    int* b = new int[N_ELEMENTS]; //Helytelen hivatkoz�s, helyes: N_ELEMENTS, nincs pointer
    std::cout << "1-100 ertekek duplazasa" << std::endl; //cout stringet v�r, helyes haszn�lat: "1-100 ertekek duplazasa", sor nincs lez�rva ;-vel
    for (int i = 0; i < N_ELEMENTS; i++) //for helyesen: for (int i = 1;i <= N_ELEMENTS; i++)
        {
            b[i] = (i+1) * 2; //�rt�kad�s  ==
        }
    for (int i = 0; i < N_ELEMENTS; i++)//for helyesen i<=100
        {
            std::cout << "Ertek: " << b[i] << std::endl;//helyes + << i illetve /n
        }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;//nincs inicializ�lva
    for (int i = 0; i < N_ELEMENTS; i++)//; hianyzik
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "valami" << std::endl;
    return 0;
}
