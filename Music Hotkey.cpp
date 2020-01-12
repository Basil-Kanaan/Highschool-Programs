/*
This program was made was a sort of music hotkey option.
If you're in the middle of a game and don't have the time to open up your music, this is what you need.
Just run the program beforehand and memorize what buttons to press.
It's for the times you just need that hype :)
~Bolt

This only works on windows.

Also if you want this to work with your own music, follow these steps:
1. Download the mp3 of whatever song you like.
2. Drag it into a new folder or whatever place is most simple eg. your desktop.
3. Rename the mp3 file if you want to make this a little more simple.
4. To find the path/directory, hit start then type cmd in the search bar.
5. Type 'dir' then hit enter.
6. Find the folder you left the music in, then type 'cd (that file)' eg. 'cd Desktop'
7. Repeat step 6 until you find the mp3 file. Don't type 'cd filename.mp3'
8. Now you have the file path, write it down somewhere. It'll look something like this
C:\\Users\\Basil\\Desktop\\ComputerEngineering\\2.mp3
*/

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

#define _WIN32_WINNT 0x0500

#include <windows.h>
#include <iostream>

using namespace std;

int main()

{
	cout << "Program made by: Basil Kanaan" << endl;
	cout << "     " << endl;
	cout << "Hit 'PAGE UP' + 'End' to start playing music." << endl;

	while (GetAsyncKeyState(VK_END) == 0 /*runs whatever is below while end key is not pressed.*/);
	{
		if (GetAsyncKeyState(VK_PRIOR) != 0 /*runs whatever is below if page up is pressed.*/)
		{
		LOOP:
			system("cls"); //clears console window
			cout << "  What song would you like to play? " << endl;
			cout << "'#' + 'Page Down' to enter selection" << endl;
			cout << "======================================" << endl;
			cout << "1. DaHoudini - Came 2 Conquer" << endl; //rename every song below to whatever song you want
			cout << "2. Speaker Knockerz - Lonely" << endl;
			cout << "3. A Boogie Wit Da Hoodie - Ransom" << endl;
			cout << "4. Karl Wolf feat. Kardinal Offishall - Amateur At Love (Remix)" << endl;
			cout << "5. Pressa - TBH" << endl;
			cout << " " << endl;
			cout << "'0' + 'PAGE DOWN' to exit" << endl;

			while (GetAsyncKeyState(VK_NEXT) == 0 /*runs whatever is below while page down is not pressed.*/);
			{
				Sleep(500);
				if (GetAsyncKeyState(VK_1) != 0 /*runs whatever is below if #1 + page down is pressed.*/)
				{
					int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show); //honestly copied this shit off the internet. No clue how it works.
					{
						int();
						{
							system("C:\\Users\\Basil\\Desktop\\ComputerEngineering\\1.mp3");	//MUST DO*******: FIND THE DIRECTORY/PATH TO YOUR MUSIC FILE, THEN PUT IT IN ""
							
							HWND hWnd;						//also copied this off the internet. All I know is it minmizes then the window that appears on top/foreground
							hWnd = GetForegroundWindow();
							ShowWindow(hWnd, SW_MINIMIZE);
						
							goto LOOP;
						}
					}
				}
				else if (GetAsyncKeyState(VK_2) != 0 /*runs whatever is below if #2 + page down is pressed.*/)
				{

					int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show);
					{
						int();
						{
							system("C:\\Users\\Basil\\Desktop\\ComputerEngineering\\2.mp3"); //MUST DO*******: FIND THE DIRECTORY/PATH TO YOUR MUSIC FILE, THEN PUT IT IN ""

							HWND hWnd;
							hWnd = GetForegroundWindow();
							ShowWindow(hWnd, SW_MINIMIZE);
							ShowWindow(hWnd, SW_HIDE);
							goto LOOP;
						}
					}
				}
				else if (GetAsyncKeyState(VK_3) != 0)
				{

					int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show);
					{
						int();
						{
							system("C:\\Users\\Basil\\Desktop\\ComputerEngineering\\3.mp3");

							HWND hWnd;
							hWnd = GetForegroundWindow();
							ShowWindow(hWnd, SW_MINIMIZE);
							ShowWindow(hWnd, SW_HIDE);
							goto LOOP;
						}
					}
				}
				else if (GetAsyncKeyState(VK_4) != 0)
				{

					int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show);
					{
						int();
						{
							system("C:\\Users\\Basil\\Desktop\\ComputerEngineering\\4.mp3");

							HWND hWnd;
							hWnd = GetForegroundWindow();
							ShowWindow(hWnd, SW_MINIMIZE);
							ShowWindow(hWnd, SW_HIDE);
							goto LOOP;
						}
					}
				}
				else if (GetAsyncKeyState(VK_5) != 0)
				{

					int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show);
					{
						int();
						{
							system("C:\\Users\\Basil\\Desktop\\ComputerEngineering\\5.mp3");

							HWND hWnd;
							hWnd = GetForegroundWindow();
							ShowWindow(hWnd, SW_MINIMIZE);
							ShowWindow(hWnd, SW_HIDE);
							goto LOOP;
						}
					}
				}

				else (GetAsyncKeyState(VK_0) != 0);
				{
					return 0;
				}
			}
		}
	}
}

//Thanks for watching!