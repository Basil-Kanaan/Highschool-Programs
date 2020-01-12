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

#include <sstream>
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;
string Player, Reason;

void BanCommand()
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

	keybd_event(VK_OEM_2,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_OEM_2,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);


	keybd_event(VK_B,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_B,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
	keybd_event(VK_A,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_A,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
	keybd_event(VK_N,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_N,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void Space() 
{
	keybd_event(VK_SPACE,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_SPACE,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void Enter()
{
	keybd_event(VK_RETURN,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_RETURN,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void CapsON() 
{
	keybd_event(VK_CAPITAL,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);
}

void CapsOFF()
{
	keybd_event(VK_CAPITAL,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

void UnderScore()
{
	keybd_event(VK_SHIFT,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);


	keybd_event(VK_OEM_MINUS,
		0x45,
		KEYEVENTF_EXTENDEDKEY | 0,
		0);

	keybd_event(VK_OEM_MINUS,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
	keybd_event(VK_SHIFT,
		0x45,
		KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
		0);
}

////////////////////////////////////////////////////////////////////////////////////////////

string List[100] =			{ "fireman10009", "jeep4x47", "krazyayt", "soulreaverss", "killerpandas911", "flynsarmy", "lukeemep", "chuwaso", "paulwho83", "bidwells", "korbohned", "fuzz920", "grantp99", "diablo_incarnate", "d4rkr4yn3", "lyonzy", "forest5592","denies","wmu","coltenv2","thatwhiteasian","finishers","white4life69","zippyfoxhart","crossfirinq"};
string ListReasons[200] =	{ "suicide encouragement","boosting through bots","hacks doxing and suicide encouragement","bot","hacks","ban evading" };
int x[100] =				{ 3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,1,2,4,4,4,5,4,-3 }; //Order of what to ban for

////////////////////////////////////////////////////////////////////////////////////////////

int num = 0, num2 = 0, Close = 0;

void PlayerName()
{
	int i = 0, e = 0, letters = 0, numbers = 0, other = 0, total; 
	Player = List[num];

	while (Player[i] != '\0')

		if ((Player[i] >= 'a' && Player[i] <= 'z') || (Player[i] <= 'A' && Player[i] >= 'Z'))
		{
			letters++;
			i++;
		}
		else
			if (Player[i] == '_')
			{
				other++;
				i++;
			}

			else
				if (Player[i] >= '0' && Player[i] <= '9')
				{
					numbers++;
					i++;
				}

	total = letters + numbers + other;

	for (int b = 0; b < total; b++)
	{
		int a = Player[e] - 32;
		int w = Player[e];
		if((Player[e] >= 'a' && Player[e] <= 'z')) 
		{
		keybd_event(a,
			0x45,
			KEYEVENTF_EXTENDEDKEY | 0,
			0);

		keybd_event(a,
			0x45,
			KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
			0);
		}
		 if ((w >= 48 && w <= 57))
		{		
			keybd_event(w,
				0x45,
				KEYEVENTF_EXTENDEDKEY | 0,
				0);

			keybd_event(w,
				0x45,
				KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
				0);
		}
		else if (w == 95) { UnderScore(); }
		e++;
	}
	cout << "Banned "<< Player << " for ";
	num++;
}

void ReasonToBan() 
{
	int i = 0, e = 0, letters = 0;
	Reason = ListReasons[x[num2]];
	cout << Reason << endl;
	
	while (Reason[i] != 0)
		if ((Reason[i] >= 'a' && Reason[i] <= 'z' || Reason[i] == ' '))
		{
			letters++;
			i++;
		}
	


	for (int b = 0; b < letters; b++)
	{
		
		int a = Reason[e] - 32;
		keybd_event(a,
			0x45,
			KEYEVENTF_EXTENDEDKEY | 0,
			0);

		keybd_event(a,
			0x45,
			KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
			0);
		int w = Reason[e];
		if (w == 32) { Space(); }
		e++;
		
	}
	
	
	num2++;
	if (x[num2] == -3) { Close = 1; }
}

int main()

{
	
	cout << "!!!   BANWAVE COMMENCING IN 5...   !!!" << endl << endl;
	Sleep(5000);
	while (Close == 0)
	{
		BanCommand();
		Space();
		PlayerName();
		Space();
		ReasonToBan();
		Enter();
		Sleep(500);
	}
	
	cout << endl << "All Players Banned." << endl;
	getchar();
	return 0;
}


