#include "Exception.h"

//constructor which initialize name of error and type of error
MyException::MyException(string name, string error) :exception(error.c_str())
{
	this->name = name;
	this->error = error;
}

//did nothing
MyException::~MyException()
{

}

//show message about arror which have name of error and type of error
void MyException::WhatException() const
{
	MessageBox::Show(StdToSys(error), StdToSys(name), MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//============================================================================================
//convert standart type to string to System::String^
String^ StdToSys(string str)
{
	return gcnew String(str.c_str());
}

//convert System::String^ type of string to standart string
const string SysToStd(String^ sysStr)
{
	return (const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(sysStr)).ToPointer();
}

//return index of string rank of string array for int rank of class
int FindIndex(string str)
{
	for (int i = 0; i < RANK_POOL; i++)
	{
		if (RanksStr[i] == str)
		{
			return i;
		}
	}
	return 0;
}

//read string data in the file and if there is no problem return data, another throw MyException
string CheckString(istream& is)
{
	string str1;
	is >> str1;
	try
	{
		if (is.fail())
		{
			throw MyException("Reading File", "Incorrect string data in the file.\nPlease check type data of string in file and try again later.");
		}
		if (str1.size() < 2 || str1.size() > 10)
		{
			throw MyException("Reading File", "Incorrect string data in the file.\nPlease check size of string data in file and try again later.");
		}
		for (int i = 0; i < str1.size(); i++)
		{
			if (!isalpha(str1[i]))
			{
				throw MyException("Reading File", "Incorrect string data in the file.\nPlease check letters in string data in file and try again later.");
			}
		}
		return str1;
	}
	catch (const MyException& myex)
	{
		myex.WhatException();
		exit(404);
	}
	catch (...)
	{
		MyException unknown_excep("Reading File");
		unknown_excep.WhatException();
		exit(404);
	}
}

//read int data in the file and if there is no problem return data, another throw MyException
int CheckInt(istream& is)
{
	double value1;
	is >> value1;
	int value2 = (int)value1;
	try
	{
		if (is.fail())
		{
			throw MyException("Reading File", "Incorrect int data in the file.\nPlease check type data of int in file and try again later.");
		}
		if (double(value1 - value2) != 0)
		{
			throw MyException("Reading File", "Incorrect int data in the file.\nPlease check int data instead double data in file and try again later.");
		}
		return value2;
	}
	catch (const MyException & myex)
	{
		myex.WhatException();
		exit(404);
	}
	catch (...)
	{
		MyException unknown_excep("Reading File");
		unknown_excep.WhatException();
		exit(404);
	}
}