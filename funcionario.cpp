#include "header.h"


void funcionario::setNome(std::string nome){
    this->nome = nome;
}

std::string funcionario::getNome(){
    return nome;
}

void funcionario::setSalarioBase(float salarioBase){
    this->salarioBase = salarioBase;
}

float funcionario::getSalarioBase(){
    return salarioBase;
}

void funcionario::setId(int id){
    this->id = id;
}

int funcionario::getId(){
    return id;
}

void funcionario::exibirInfo(){
    
}

funcionario::~funcionario(){

}