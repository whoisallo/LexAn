#pragma once
#include <string>
#include <vector>
class FileReader
{
public:
	FileReader();
	FileReader(std::string fileName);
	~FileReader();
	char getChar();
	std::string getString(int size);
	void reset();
	bool isEmpty();
	void test(std::string testFile);
	void removeString(int size);
	int lineNumber();
private:
	std::string file;
	int p = 0;
	int line = 1;
};
