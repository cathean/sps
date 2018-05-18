#include <iostream>
#include <func_proto.h>

bool is_port_open(unsigned short port_num);

int main()
{
    unsigned short portNum;
    std::cout << "Port: ";
    std::cin >> portNum;
    if(is_port_open(portNum))
    {
        std::cout << "OPEN" <<std::endl;
    }else
    {
        std::cout << "CLOSE" <<std::endl;
    }

    return 0;
}
