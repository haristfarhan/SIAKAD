#include <iostream>
#include "include/matkul.hpp"

matkul::matkul(std::string id, std::string nama, int sks)
    : id(id), nama(nama), sks(sks){};

std::string matkul::getId()
{
    return this->id;
}

std::string matkul::getNama()
{
    return this->nama;
}

void matkul::setNama(std::string nama)
{
    this->nama = nama;
}

void matkul::setSKS(int sks)
{
    this->sks = sks;
}