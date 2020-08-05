#include<iostream>

template <typename T>
class vector
{
	int cs;
	int ms;
	T *arr;

public:
	vector()
	{
		cs=0;
		ms=1;
		arr=new T[ms];
		cs++;
	}

void push_back(const T d)
{
	if(cs==ms)
	{
		T *old_arr=arr;
		arr=new T[2*ms];
		ms=2*ms;
		for(int i=0;i<cs;i++)
		{
			arr[i]=old_arr[i];
		}
		delete [] old_arr;
	}
	arr[cs]=d;
	cs++;
}

int capacity() const
{
	return ms;
}
int size() const
{
	return cs+1;
}
void pop_back()
{
	cs--;
}

T front() const
{
	return arr[0];
}

T back() const
{
	return arr[cs];
}

T operator[](int i)
{
	return arr[i];
}
T AT(int i)
{
	return arr[i];
}
bool empty()
{
	return (cs==0);
}
};