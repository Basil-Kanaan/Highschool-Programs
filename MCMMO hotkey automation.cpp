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
	cout << "Starting MCMMO trainer in 5..." << endl;
	Sleep(5000);
		while (1)
		{
				keybd_event(VK_OEM_7,
				0x45,
				KEYEVENTF_EXTENDEDKEY | 0,
				0);

				keybd_event(VK_OEM_7,
				0x45,
				KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
				0);
				Sleep(100);
				keybd_event(VK_UP,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_UP,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);
				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);
				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);
				SetCursorPos(1880, 525);
				Sleep(100);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(100);
				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
			//	Sleep(6500);
				Sleep(5000);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(100);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			
				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);
				
				SetCursorPos(400, 300);
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(1000);
				SetCursorPos(400, 425);	
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(600);

		}
}