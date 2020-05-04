#include <cstring.h>

class N {

public:
	N(int value)
	{
		this->n = value;
	}
	N operator+(N &rhs) {return N(rhs.n + this->n);}
	N operator-(N &rhs) {return N(this->n - rhs.n);}

	void setAnnotation(char *str)
	{
		size_t len;
		
		len = strlen(str);
		memcpy(this->str, str, len);
		return ;
	}

private:
	int n;
	char *str;
}

int main(int argc, char **argv)
{
	if (argc < 2)
		_exit(1);
	N *x = new N(5);
	N *y = new N(6);
	N &five = *x, &six = *y;
	five.setAnnotation(argv[1]);
	return (six + five);
}