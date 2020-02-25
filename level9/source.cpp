#include <cstring.h>

class N {

public:
	N(int value) //_ZN1NC2EI => constructor
	{
		this->n = value;
	}
	0x080486f9 <+3>:	mov    0x8(%ebp),%eax
    0x080486fc <+6>:	movl   $0x8048848,(%eax)
    0x08048702 <+12>:	mov    0x8(%ebp),%eax
    0x08048705 <+15>:	mov    0xc(%ebp),%edx
    0x08048708 <+18>:	mov    %edx,0x68(%eax)
    0x0804870b <+21>:	pop    %ebp
    0x0804870c <+22>:	ret
	N operator+(N &rhs) {return N(rhs.n + this->n);} //_ZN1NplERS_
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
	N *x = new N(5); //_Znwj@plt
	N *y = new N(6);
	N &five = *x, &six = *y;
	five.setAnnotation(argv[1]);
	return (six + five);
}

/*
   0x08048650 <+92>:	mov    %ebx,0x18(%esp) => y
   0x08048654 <+96>:	mov    0x1c(%esp),%eax => x
   0x08048658 <+100>:	mov    %eax,0x14(%esp) => five $esp + 0x14
   0x0804865c <+104>:	mov    0x18(%esp),%eax => six
   0x08048660 <+108>:	mov    %eax,0x10(%esp) => six + $esp + 0x10
   0x08048664 <+112>:	mov    0xc(%ebp),%eax => argv[0]
   0x08048667 <+115>:	add    $0x4,%eax => argv[1]
   0x0804866a <+118>:	mov    (%eax),%eax
   0x0804866c <+120>:	mov    %eax,0x4(%esp) => argv[1], second argument
   0x08048670 <+124>:	mov    0x14(%esp),%eax => five
   0x08048674 <+128>:	mov    %eax,(%esp) => five, first argument
   0x08048677 <+131>:	call   0x804870e <_ZN1N13setAnnotationEPc> => call func

   0x0804867c <+136>:	mov    0x10(%esp),%eax => six
   0x08048680 <+140>:	mov    (%eax),%eax => *six
   0x08048682 <+142>:	mov    (%eax),%edx => **six: edx
   0x08048684 <+144>:	mov    0x14(%esp),%eax => five
   0x08048688 <+148>:	mov    %eax,0x4(%esp) => five, second argument
   0x0804868c <+152>:	mov    0x10(%esp),%eax => six
   0x08048690 <+156>:	mov    %eax,(%esp) => six, first argument
   0x08048693 <+159>:	call   *%edx => ***six
   0x08048695 <+161>:	mov    -0x4(%ebp),%ebx => return function
   0x08048698 <+164>:	leave
   0x08048699 <+165>:	ret
*/
