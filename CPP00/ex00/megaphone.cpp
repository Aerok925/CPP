#include "iostream"

int main(int argc, char *argv[])
{
	using std::cout;
	using std::cin;
	if (argc == 1)
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++)
				cout<<(char)toupper(str[j]);
		}
	}
	cout<<std::endl;
}