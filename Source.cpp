// CricBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
  A stringstream class in C++ is a Stream Class to Operate
  on strings. The stringstream class Implements the
  Input/Output Operations on Memory Bases streams i.e. string:
*/
#include <sstream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Header.h"
int size = 0;
using namespace std;

int main()
{
	int choice;
	bool checkSAVE, run = 1;
	Team T1;
	Team* T2;
	Team* T3;
	T2 = T1.data();
	T3 = T1.file_read_data();
	//obj=file_read_data(obj);
	
	cout << endl;
	Match obj1;

	LOGIN L1;
	L1.login(); system("CLS");

	while (run != false)
	{
		cout << "***********************************WELCOME TO CricBuzz***********************************" << endl;
		cout << "1.  ADD TEAM" << endl;
		cout << "2.  SEARCH PLAYER INFO." << endl;
		cout << "3.  DELETE TEAM" << endl;
		cout << "4.  UPDATE PLAYER INFO." << endl;
		cout << "5.  UPDATE CAPTIAN INFO." << endl;
		cout << "6.  UPDATE COACH INFO." << endl;
		cout << "7.  SEE MATCH INFO." << endl;
		cout << "8.  CONDUCT MATCH." << endl;
		cout << "9.  SCHEDULE MATCH." << endl;
		cout << "10. SEE TEAM DETAILS." << endl;
		cout << "11. DELETE A SPECIFIC PLAYER" << endl;
		cout << "12. ADD A SPECIFIC PLAYER" << endl;
		cout << "13. NEWS." << endl;
		cout << endl;
		cout << "Please enter the choice: ";
		cin >> choice;
		cout << endl;
		
		switch (choice)
		{
		case 1:
			T1.add_Team(T3);
			//::size++;
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 2:
			T1.searchPlayer(T2,T3);
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 3:
			T1.remove_TEAM(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 4:
			T1.updatePlayer(T2,T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 5:
			T1.update_cap(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 6:
			T1.update_coach(T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 7:
			obj1.matchstatus();
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 8:
            obj1.conductmatch();

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
            cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 9:
			obj1.schdule_match(T3);
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 10:
			T1.disp(T2,T3);
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 11:
			T1.remove_PLAYER(T2,T3);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 12:
			T1.add_specific(T3,T2);

			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		case 13:
			
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;

		default:
			cout << endl << "INVALID CHOICE" << endl;
			cout << endl << "PRESS '1' TO CONTINUE THE PROGRAM OR PRESS '0' TO QUIT IT : ";
			cin >> run;
			cout << endl;
			system("CLS");
			break;
		}
	}
	system("CLS");
	cout << "\n\n\t\t\t\tGOOD BYE\n\n\t\t\t\t";
	cout << "\n\n\t\t\t\tCREATED BY ARBAZ AMEER & ZAIN-UL-ABIDEEN\n\n\t\t\t\t";
	Sleep(1000);
	return 0;
}
