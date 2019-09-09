#include <iostream>
class LetDebug
{
public:
	void printNum()
	{
		short s1 = 32767;
		short s2 = 1;
		short s3 = (short)s1 + s2;
		std::cout << s3 << std::endl;
	}
};
int main()
{
	LetDebug *ld = new LetDebug;
	ld->printNum();
	return 0;
}
//32767까지 표현됨 1이 들어가면 2의보수에 의해서 음수로 바뀜 
//맨 첫글자가 부호라 2바이트가 아닌 더 큰 변수에 넣어줘야함 4바이트인 int에 넣어주면 된다
