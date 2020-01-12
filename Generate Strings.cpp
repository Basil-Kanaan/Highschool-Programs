#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>

using namespace std;

const char Key[92] =
{
	'a', 'b', 'c', 'd', 'e', 'f', 'g',
	'h', 'i', 'j', 'k', 'l', 'm', 'n',
	'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G',
	'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	'V', 'W', 'X', 'Y', 'Z',

	'!','"','#','$','%','&','(',')','*','+',',','-','.','/',':',';','<','=','>','?','@','[',' ',']','^','_','{','|','}','~',

	'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'
};

// Recursive function, keeps clocking characters
// until length is reached

void Generate(unsigned int length, string s)
{
		
		if (length == 0) // when length has been reached
		{
			//	std::cout << s << "\n"; // print it out

			ofstream myfile("Test.txt", ios_base::app | ios_base::out);
			if (myfile.is_open())
			{
				myfile << ("%s", s);
				myfile << "\n";
				myfile.close();
			}

			return;
		}

		for (unsigned int i = 0; i < 92; i++) // iterate through Keys
		{
			// Create new string with next character
			// Call generate again until string has reached it's length
		
			string appended = s + Key[i];
			Generate(length - 1, appended);
		}
}


void Start()
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
	Start();
	return 0;
}




