/**
*@file Task3_z_28
*@brief solution (C++ code) of Task3.28 GL 
* (��������� �������, ��� �������, ������ ���� � �������� ����������� ����� ����������� �������� ���� �������
* (��� ������ �� �lролеен����� ����). ������ ����������� ������. �� ����� ���������� ������� 
* ���������, � ����� � ��� ������ �������� ���� ������������ ������ ������� �����.)
*
*Copyright 2014 by Roman Bojko
*
*/


#include<iostream>
using namespace std;
int main(){
	
	cout <<"Enter Your String "<<endl;  
	char string[255];  //���������� ����� � ���������� 255 �������
	cin.getline(string,255);  //���������� ���������� � ���������, ������ ����� �� ���
	cout << "-----------"<<endl;
	cout <<"Your String :  ";
	cout << string <<endl; // ���� ���������� �����
    cout << "-----------"<<endl;
	
	cout <<"Enter Next String "<<endl;
	char string1[255]; //���������� ���������� ����� � ���������� 255 �������
	cin.getline(string1,255); //���������� ���������� � ���������, ������ ���������� ����� �� ���
	cout << "-----------"<<endl;
	cout <<"Your Next String :  ";
	cout << string1 <<endl; // ���� ���������� ���������� �����
	cout << "-----------"<<endl;
	
	char symbol; // ���������� ��� ��������� �������� �������
	int j = 0;
	cout<<"Enter Search Symbol: ";
    cin>>symbol; //���������� ���������� � ���������, ��� ������� ������
	

	for(int i = 0; string[i]!='\0'; ++i) // ���� ������ ������� ��������  ������� � ������� �������� �����
    {
		
        if(string[i] == symbol)
            {
				j++;
			}
		
		}
	cout<<"Symbol "<<"' "<<symbol<<" '"<<" found in first string "<<j<<" raz."<<endl; // ���� ���������� ������ �� ������� �����
	j = 0; // ��������� ���������� ������ 

		for(int i = 0; string1[i]!='\0'; ++i) // ���� ������ ������� ��������  ������� � ������� �������� �����
    {
		
        if(string1[i] == symbol)
            {
				
				j++;
			}
	    }
	cout << "-----------"<<endl;
    cout<<"Symbol "<<"' "<<symbol<<" '"<<" found in second string "<<j<<" raz."<<endl; // ���� ���������� ������ �� ������� �����
    system("pause");
    return 0;   
	
}
