#include <iostream>
#include <cstring>

class A
{
    private: 
        int val1;
        int* p;
    public: 
        int get_val1() const;
        int* get_p() const;
        A();
};

int A::get_val1() const {return val1;}
int* A::get_p() const {return p;}
A::A() {val1 = 0; p = nullptr;}
int y;

A a2;

class String
{
    public :
        String(); // Default constructor
        String(const char s[]); // construction from character array
        ~String();
        String& operator=(const String& other);
        String(const String& other);
        void print(std::ostream& out) const;
    private :
        char* buffer;
        int len;
};

// a = b = c; ==> a = (b = c);

String::String() {len = 0; buffer = nullptr;}
String::String(const char s[])
{
    buffer = nullptr;
    len = std::strlen(s);
    if (len > 0) {
        buffer = new char[len];
        for (int i = 0; i < len; i++) buffer[i] = s[i];
    }
}
String::~String() {delete[] buffer;}

String& String::operator=(const String& other)
{
    if (this != &other){
        delete[] buffer;
        buffer = nullptr;
        len = other.len;
        if(len > 0) {
            buffer = new char[len];
            for (int i = 0; i < len; i++) buffer[i] = other.buffer[i];
        }
    }
    return *this;
}

String::String(const String& other)
{
    len = other.len;
    buffer = nullptr;
    if (len > 0) {
        buffer = new char[len];
        for (int i = 0; i < len; i++) 
            buffer[i] = other.buffer[i];
    }
}

void String::print(std::ostream& out) const
{
    for (int i = 0; i < len; i++) out << buffer[i];
}

std::ostream& operator<<(std::ostream& out, const String& str)
{
    str.print(out);
    return out;
}

int main(int argc, char const *argv[])
{
    int x(3);
    int i;
    std::cout << x << std::endl;
    std::cout << "i: " << i << std::endl;
    A a;
    std::cout << "a1: " << a.get_val1() << " " << a.get_p() << std::endl; 
    std::cout << "a2: " << a2.get_val1() << " " << a.get_p() << std::endl; 
    std::cout << "y: " << y << std::endl;
    String s;
    std::cout << "s: " << s << std::endl;
    String s1("Ann");
    std::cout << "s1: " << s1 << std::endl;
    // s1.print(std::cout);
    String s2("George");
    std::cout << "s2: " << s2 << std::endl;
    // s2.print(std::cout);
    s1 = s2;
    std::cout << "s1: " << s1 << std::endl;
    // s1.print(std::cout);
    String s3(s1); // String s3 = s1;
    std::cout << "s3: " << s3 << std::endl;
    // s3.print(std::cout);


    
    
    
    return 0;
}
