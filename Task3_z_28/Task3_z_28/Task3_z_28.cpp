/**
*@file Task3_z_28
*@brief solution (C++ code) of Task3.28 GL 
* (Розробити функцію, яка визначає, скільки разів у заданому символьному рядку зустрічається вказаний набір символів
* (без огляду на регістри літер). Ввести послідовність речень. На основі розробленої функції 
* визначити, в якому з цих речень найбільше разів повторюється задане ключове слово.)
*
*Copyright 2014 by Roman Bojko
*
*/


#include<iostream>
using namespace std;
int main(){
	
	cout <<"Enter Your String "<<endl;  
	char string[255];  //оголошення рядка з параметром 255 символів
	cin.getline(string,255);  //зчитування інформації з клавіатури, всього рядка за раз
	cout << "-----------"<<endl;
	cout <<"Your String :  ";
	cout << string <<endl; /// Вивід отриманого рядка
    cout << "-----------"<<endl;
	
	cout <<"Enter Next String "<<endl;
	char string1[255]; ///оголошення наступного рядка з параметром 255 символів
	cin.getline(string1,255); //зчитування інформації з клавіатури, всього наступного рядка за раз
	cout << "-----------"<<endl;
	cout <<"Your Next String :  ";
	cout << string1 <<endl; / // Вивід отриманого наступного рядка
	cout << "-----------"<<endl;
	
	char symbol; /// оголошення про створення шукаємого символа
	int j = 0;
	cout<<"Enter Search Symbol: ";
        cin>>symbol; ///зчитування інформації з клавіатури, про шукаємий символ

	for(int i = 0; string[i]!='\0'; ++i) // цикл пошуку кількості заданого  символа у першому заданому рядку
    {
		
        if(string[i] == symbol)
            {
				j++;
			}
		
		}
	cout<<"Symbol "<<"' "<<symbol<<" '"<<" found in first string "<<j<<" raz."<<endl; // вивід результатів пошуку по першому рядку
	j = 0; // обнулення результатів пошуку 

		for(int i = 0; string1[i]!='\0'; ++i) /// цикл пошуку кількості заданого  символа у другому заданому рядку
    {
		
        if(string1[i] == symbol)
            {
				
				j++;
			}
	    }
	cout << "-----------"<<endl;
    cout<<"Symbol "<<"' "<<symbol<<" '"<<" found in second string "<<j<<" raz."<<endl; /// вивід результатів пошуку по другому рядку
    system("pause");
    return 0;   
	
}
