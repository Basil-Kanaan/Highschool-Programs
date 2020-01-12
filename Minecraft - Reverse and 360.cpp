#define VK_1 0x31   //defines each key as a variable. Also, this is #1 on your keyboard
#define VK_2 0x32	//#2 on your keyboard
#define VK_3 0x33	//#3 on your keyboard
#define VK_4 0x34	//etc
#define VK_5 0x35
#define VK_6 0x36
#define VK_7 0x37
#define VK_8 0x38
#define VK_9 0x39
#define VK_0 0x30
#define VK_LBUTTON 0x01

#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//840 = middle x
//525 = middle y

int main()

{
	cout << "Made by: Bbolt" << endl;
	cout << "Hit 'End' to start 'hacking'." << endl;

	while (GetAsyncKeyState(VK_END) == 0 /*runs whatever is below while end key is not pressed.*/);
	{	
		LOOP:
			system("cls"); //clears console window
			cout << "'#' + 'Page Down' to enter selection" << endl;
			cout << "For #'s with '*'," << endl;
			cout << "you must hold the # and tap 'Page Down' once.  " << endl;
			cout << "==============================================" << endl;
			cout << " 1. 180" << endl; //rename every song below to whatever song you want
			cout << " 2. 360" << endl;
			cout << "*3. Toggle DERP" << endl;
			cout << "*4. Toggle TWERK" << endl;
			cout << " " << endl;
			cout << "'0' + 'PAGE DOWN' to exit" << endl;
			
			while (GetAsyncKeyState(VK_NEXT) == 0 /*runs whatever is below while page down is not pressed.*/);
			{
				
				if (GetAsyncKeyState(VK_1) != 0 /*runs whatever is below if #1 + page down is pressed.*/)
				{
					SetCursorPos(0, 525);
					Sleep(150);
					SetCursorPos(1680, 525);
					goto LOOP;
				}
				else if (GetAsyncKeyState(VK_2) != 0 /*runs whatever is below if #2 + page down is pressed.*/)
				{
					SetCursorPos(420, 525);
					Sleep(100);
					SetCursorPos(420, 525);
					Sleep(100);
					SetCursorPos(420, 525);
					Sleep(100);
					SetCursorPos(420, 525);
					Sleep(100);

					goto LOOP;


				}
				else if (GetAsyncKeyState(VK_3) != 0)
				{
					while(GetAsyncKeyState(VK_3) != 0)
					{
						time_t
						srand(time(NULL));
						int x = rand() % 1680;
						int y = rand() % 1050;
						//840 525
						SetCursorPos(x, y);
						Sleep(10);
						
					}
				goto LOOP;
				}
				else if (GetAsyncKeyState(VK_4) != 0)
				{
					while (GetAsyncKeyState(VK_4) != 0)
					{
						keybd_event(VK_NUMPAD0, 0xb8, 0, 0); //twerk Press
						Sleep(50);
						keybd_event(VK_NUMPAD0, 0xb8, KEYEVENTF_KEYUP, 0); // twerk Release
						Sleep(50);
						
					}
					goto LOOP;
				}
				else (GetAsyncKeyState(VK_0) != 0);
				{
					return 0;
				}
			goto LOOP;
		}
			}
		
	goto LOOP;
}


/*int x = 0, y = 0;
SetCursorPos(625, 725);//1
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(695, 450);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(675, 725);//2
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(745, 450);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(725, 725);//3
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(795, 450);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(775, 725);//4
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(695, 400);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(825, 725);//5
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(745, 400);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(875, 725);//6
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(795, 400);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(925, 725);//7
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(695, 350);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(975, 725);//8
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(745, 350);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(1045, 725);//9
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(795, 350);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
Sleep(100);
SetCursorPos(975, 400);

keybd_event(VK_RSHIFT, 0, 0, 0);
Sleep(3000);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
keybd_event(VK_RSHIFT, 0, KEYEVENTF_KEYUP, 0);
Sleep(200);


SetCursorPos(1045, 725);
mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
*/
//840 525