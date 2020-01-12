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
#include <fstream>

using namespace std;

// Create some alphabet tables

const char Alphabet[52] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	'V', 'W', 'X', 'Y', 'Z'	
};
/*const int NUM[10] = {
//'~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '-', '+', '=',
'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'
};
*/
// Recursive function, keeps clocking characters
// until length is reached

void Generate(unsigned int length, std::string s)
{

	if (length == 0) // when length has been reached
	{

		int letters = 0; // letters
		int i = 0;
		while (s[i] != 0)

			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			{
				letters++;
				i++;
			}

		std::cout << s << "\n"; // print it out

		if ((s[i] >= 'a' && s[i] <= 'z'))
		{

			for (int i = 0; i < letters; i++)
			{
				int a = s[i] - 32;
				keybd_event(a,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(a,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
			}
		}
		else {
			for (int i = 0; i < letters; i++)
			{
				int a = s[i] - 32;
		
				keybd_event(a,
					0x45,
					KEYEVENTF_EXTENDEDKEY | 0,
					0);

				keybd_event(a,
					0x45,
					KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
					0);
			
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

		Sleep(1);

		return;
	}

	for (unsigned int i = 0; i < 26; i++) // iterate through alphabet
	{
		// Create new string with next character
		// Call generate again until string has reached it's length
		std::string appended = s + Alphabet[i];
		Generate(length - 1, appended);
	}
}

void Crack()
{
	while (1)
	{
		// Keep growing till I get it right
		static unsigned int stringlength = 8;
		Generate(stringlength, "");
		stringlength++;
	}
}

int main()
{
	std::cerr << "Attempting to crack in 3...";
	Sleep(3000);
	Crack();
	return 0;
}




