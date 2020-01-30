#pragma once
#include <iostream>
using namespace std;

template <typename T>
class SimpleUniquePointer
{
private:
	T* ptr{};
public:

	SimpleUniquePointer() = default;
	~SimpleUniquePointer()
	{
		if (ptr != nullptr)
		{
			delete ptr;

			ptr = nullptr;
		}
	}

	SimpleUniquePointer(T item)
	{
		ptr = new T{ item };
	}

	SimpleUniquePointer(const SimpleUniquePointer& other) = delete;
	SimpleUniquePointer& operator=(const SimpleUniquePointer& other) = delete;
	SimpleUniquePointer& operator=(SimpleUniquePointer&& other)
	{
		ptr = other.ptr;
		other.ptr = nullptr;
	}

	SimpleUniquePointer(SimpleUniquePointer&& other) noexcept
	{
		ptr = other.ptr;

		other.ptr = nullptr;

	}




	T* get()
	{
		return ptr;
	}


};