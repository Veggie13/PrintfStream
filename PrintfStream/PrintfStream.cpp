// PrintfStream.cpp : Defines the entry point for the console application.
//

#include <sstream>
#include <tchar.h>

using namespace std;

class printfstream : public ostream
{
    class : public stringbuf
    {
    public:
        virtual int sync()
        {
            printf("%s", str().c_str());
            str("");
            return 0;
        }
    } _buf;
public:
    printfstream() : ostream(&_buf) {}
};


int _tmain(int argc, _TCHAR* argv[])
{
    printfstream s;
    s << "Hi!" << endl << "How are you?" << endl;
	return 0;
}

