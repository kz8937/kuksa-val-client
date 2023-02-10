#ifndef BACKEND_H
#define BACKEND_H
#include <string>
class Backend
{
public:
    int server_ip{};
    int server_port{};
    std::string cert_path{};
};

#endif