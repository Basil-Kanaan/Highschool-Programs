#include <sstream>
#include <windows.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()

{
	cout << "Program made by: Basil Kanaan\n\n Leave the program on to automatically type the fast typer challenge." << endl;

	ifstream McLog("C:/Users/Basil/AppData/Roaming/.minecraft/logs/latest.log");

	string FastWord;
	boolean test1 = false, test2 = false;
	int letters = 0, i = 0;

	while (1)
	{
		McLog.seekg(0, McLog.end);

		while (McLog >> FastWord)
		{
			cout << FastWord << endl;

			if(test2 == true)
			{
				int i = 0;
				int letters = 0;

				while (FastWord[i] != 0)
					if ((FastWord[i] >= 'a' && FastWord[i] <= 'z') || (FastWord[i] >= 'A' && FastWord[i] <= 'Z') || (FastWord[i] == '/') || (FastWord[i] == ' '))
					{
						letters++;
						i++;
					}


				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_OEM_7,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);

				int e = 0;
				for (int z = 0; z < letters; z++)
				{

					int a = FastWord[e] - 32;
					cout << a << endl;
				
					if((a < 61) && (a > 32)) 
					{
						a = a + 32;

						keybd_event(VK_SHIFT,
							0x45,
							KEYEVENTF_EXTENDEDKEY | 0,
							0);

						
						keybd_event(a,
							0x45,
							KEYEVENTF_EXTENDEDKEY | 0,
							0);

						keybd_event(a,
							0x45,
							KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
							0);

			
						keybd_event(VK_SHIFT,
							0x45,
							KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
							0);
						e++;
					
					}
					else
					{
						keybd_event(a,
							0x45,
							KEYEVENTF_EXTENDEDKEY | 0,
							0);

						keybd_event(a,
							0x45,
							KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
							0);
						e++;
					}
				}

				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(VK_RETURN,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
				Sleep(100);

				test2 = false;
			}

			if(FastWord == "[!]")
			{
				test1 = true;
				cout << "Reached" << endl;
			}
			if((FastWord == "Type") && (test1 == true))
				test2 = true;
		}
		McLog.clear();
	}
}