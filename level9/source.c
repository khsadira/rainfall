#include <iostream>
#include <cstring>

class Number
{
	public:

		void setAnnotation(char *a)
		{
			memcpy(_annotation, a, strlen(a));
		}
		virtual int operator+(Number &r)
		{
			return (_number - r._number)
		}
		virtual int operator - (Number &r)
		{
			return (_number - r._number)
		}
	private:
		char _annotation[108];
		int _number;
};

int main(int argc, char **argv)
{
	if (argc <= 1)
		exit(1);
	Number *n1 = new Number(5);
	Number *n2 = new Number(6);
	n1->setAnnotation(argv[1]);
	return (*n1 + *n2);
}