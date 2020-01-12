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
#define VK_A 0x41
#define VK_B 0x42
#define VK_C 0x43
#define VK_D 0x44
#define VK_E 0x45
#define VK_F 0x46
#define VK_G 0x47
#define VK_H 0x48
#define VK_I 0x49
#define VK_J 0x4A
#define VK_K 0x4B
#define VK_L 0x4C
#define VK_M 0x4D
#define VK_N 0x4E
#define VK_O 0x4F
#define VK_P 0x50
#define VK_Q 0x51
#define VK_R 0x52
#define VK_S 0x53
#define VK_T 0x54
#define VK_U 0x55
#define VK_V 0x56
#define VK_W 0x57
#define VK_X 0x58
#define VK_Y 0x59
#define VK_Z 0x5A
#define VK_Exm 0x31

//#define La = {"VK_A","VK_B","VK_C","VK_D","VK_E","VK_F","VK_G","VK_H","VK_I","VK_J","VK_K","VK_L","VK_M","VK_N","VK_O","VK_P","VK_Q","VK_R","VK_S","VK_T","VK_U","VK_V","VK_W","VK_X","VK_Y","VK_Z",} 

#include <sstream>
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()

{
	int Keys;
	cout << "Program made by: Basil Kanaan\n" << endl;
	cout << "Do you use ASDW or Arrow keys?\n" << endl;
	cout << "1 = ASDW , 2 = Arrow keys" << endl << endl;
	cin >> Keys;
	cout << endl;
	cout << "Hit 'PAGE UP' + 'End' to start program.\n";


	while (GetAsyncKeyState(VK_END) == 0 /*runs whatever is below while end key is not pressed.*/);
	{
		if (GetAsyncKeyState(VK_PRIOR) != 0 /*runs whatever is below if page up is pressed.*/)
		{
	A:
			system("cls"); //clears console window
			cout << "'1' + 'Page Down' to AFK" << endl;
			cout << endl;
			cout << "Hold '2' to stop AFK" << endl;
			cout << endl;
			cout << "'0' + 'PAGE DOWN' to exit" << endl;

			while (GetAsyncKeyState(VK_NEXT) == 0 /*runs whatever is below while page down is not pressed.*/);
			{
				int x = 0;
			LOOP:
				
			
				if (GetAsyncKeyState(VK_2) != 0)
				{
					x = 0;
				}
				else if (GetAsyncKeyState(VK_0) != 0)
				{
					return 0;
				}
				else if (GetAsyncKeyState(VK_1) != 0 || x == 1)
				{
				
					keybd_event(VK_UP,
						0x45,
						KEYEVENTF_EXTENDEDKEY | 0,
						0);
					Sleep(500);
					keybd_event(VK_UP,
						0x45,
						KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
						0);
					keybd_event(VK_LEFT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | 0,
						0);
					Sleep(250);
					keybd_event(VK_RSHIFT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | 0,
						0);
					keybd_event(VK_RSHIFT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
						0);
					Sleep(250);
					keybd_event(VK_LEFT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
						0);
					keybd_event(VK_DOWN,
						0x45,
						KEYEVENTF_EXTENDEDKEY | 0,
						0);
					Sleep(500);
					keybd_event(VK_DOWN,
						0x45,
						KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
						0);
					keybd_event(VK_RIGHT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | 0,
						0);
					Sleep(500);
					keybd_event(VK_RIGHT,
						0x45,
						KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
						0);
					x = 1;
					goto LOOP;
				}
				
				else{ goto LOOP; }
			}
			keybd_event(VK_NEXT,
				0x45,
				KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
				0);
			goto A;
		}
	}
}