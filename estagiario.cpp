#include "header.h"
#include <iostream>

void estagiario::setHorasTrabalhadas(int horas){ //método para definir horas trabalhadas
    horasTrabalhadas = horas;
}

int estagiario::getHorasTrabalhadas(){ // método para retornar horas trabalhadas
    return horasTrabalhadas;
}

float estagiario::calcularSalarioFinal(){ // método para calcular salário final
    float salarioFinal = salarioBase * (horasTrabalhadas / 160.0);
    return salarioFinal;
}

void estagiario::exibirInfo(){ // método para exibir informações
    std::cout << "ID: " << getId() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Tipo: Estagiario" << std::endl;
    std::cout << "Horas Trabalhadas: " << getHorasTrabalhadas() << std::endl;
    std::cout << "Salario Base: " << getSalarioBase() << std::endl;
    std::cout << "Salario Final: " << calcularSalarioFinal() << std::endl;
}

