#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__

#include <iostream>

class matkul {
private:
    std::string id;
    std::string nama;
    int sks;
public:
    matkul(std::string id, std::string nama, int sks);
    std::string getId();
    std::string getNama();
    void setNama(std::string nama);
    void setSKS(int sks);
};

#endif