#include<iostream>
#include<string>
using namespace std;
int main()
{
	string codenum[26] = { "2","22","222","3","33","333","4","44","444","5","55","555","6","66","666",
		"7","77","777","7777","8","88","888","9","99","999","9999" };
	
	string spacenum = "0";
	string commanum = "1";
	string periodnum = "11";
	bool captial = true;

	string input;
	getline(cin, input);
	string result = "";
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			if (captial == false)
			{
				result += "*";
				captial = true;
			}
			result += codenum[input[i] - 'A'];
		}
		else if (input[i] >= 'a' && input[i] <= 'z')
		{
			if (captial == true)
			{
				result += "*";
				captial = false;
			}
			result += codenum[input[i] - 'a'];
		}
		else if (input[i] == ' ')
		{
			result += spacenum;
		}
		else if (input[i] == ',')
		{
			result += commanum;
		}
		else //'.'
		{
			result += periodnum;
		}
	}
	cout << result << endl;
	return 0;
}