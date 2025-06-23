#include <iostream>
#include <cstring>
using namespace std;


bool is_spaces(char arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (isspace(arr[i]))
		{
			return true;
		}
	}
	return false;
}
bool is_other(char arr[], int length)
{

	for (int i = 0; i < length; i = i + 2)
	{
		if ((arr[i] != '1' && arr[i] != '2' && arr[i] != '3'))
		{
			return true;
		}
		else

		{
			if ((i + 1) < length)
			{
				if (arr[i + 1] != '+')
				{
					return true;
				}
			}
		}
	}
	return false;
}
void ascedning_order(char arr[], int length)
{
	for (int i = 0; i < length; i = i + 2)
	{
		for (int j = 0; j < length - 2; j = j + 2)
		{
			if (arr[j] > arr[j + 2])
			{
				int temp = arr[j];
				arr[j] = arr[j + 2];
				arr[j + 2] = temp;
			}
		}
	}

	cout << endl;
	for (int j = 0; j < length; j++)
	{
		cout << arr[j] << " ";
	}

}
int main()
{
	char sum[100];
	do
	{
		cout << "Enter the numbers 1+2+3 with any order you want:\n";
		cin.getline(sum, 100);
	} while (strlen(sum) == 0 || strlen(sum) > 100 || is_spaces(sum, strlen(sum)) || is_other(sum, strlen(sum)));
	ascedning_order(sum, strlen(sum));

}