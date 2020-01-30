#pragma once
#include <vector>
#include <string>
using namespace std;

class Address
{
	vector<string> address;

public:
	void addAddress(string add)
	{
		address.push_back(add);
	}

	template <typename Func>
	vector<string> filter(Func pred)
	{
		vector<string> results;

		for (auto item : address)
		{
			if (pred(item))
			{
				results.push_back(item);
			}
		}


		return results;
	}


};
