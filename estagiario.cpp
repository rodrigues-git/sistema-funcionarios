#include "header.h"
#include <iostream>

void estagiario::setHorasTrabalhadas(int horas){
    horasTrabalhadas = horas;
}

int estagiario::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

float estagiario::calcularSalarioFinal(){
    float salarioFinal = salarioBase * (horasTrabalhadas / 160.0);
    return salarioFinal;
}

void estagiario::exibirInfo(){
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Estagiario" << std::endl;
    std::cout << "Horas Trabalhadas: " << getHorasTrabalhadas() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}

