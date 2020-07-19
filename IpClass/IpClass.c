// Type your code here, or load an example.
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

typedef struct {uint8_t a; uint8_t b; uint8_t c;uint8_t d; } IP;
 class Address{
     IP ipaddress;
     public:
    Address()
    {
        ipaddress.a = 255;
        ipaddress.b = 64;
     };
     virtual void printAddress()
     {
         printf("The address %d.%d.%d.%d\n", ipaddress.a, ipaddress.b, ipaddress.c, ipaddress.d );
     }
     void setAddress(uint8_t a,uint8_t b,uint8_t c, uint8_t d )
        {
            ipaddress.a = a;
            ipaddress.b = b;
            ipaddress.c = c;
            ipaddress.d = d;
        }
    } ;
class Host: public Address {
    char * hostname;
    public:
        Host(const char * a): Address()
        {
            hostname = (char *) malloc(strlen(a));
            strncpy(hostname, a, strlen(a));
        }
virtual void printAddress()
{
    printf("Hostname-> '%s' \n", hostname);
    Address::printAddress();
}
};
int main(int argc, char ** argv, char ** envp)
{
    int x = 100;
    int y = 200;
	printf("X = %d Y = %d\n", x,y);
    cout << "Making an address\n";
    Address* a = new Address();
    a->setAddress(255,255,255,0);
    a->printAddress();
    cout << "\nMaking host\n";
    string name = "abc.com";
    const char * hostname = name.c_str();
    Host * h = new Host(hostname);
    h->setAddress(8,8,8,8);
    h->printAddress();
    cout<< "\nNow to cast\n";
    a = h;
    a->printAddress();

}
