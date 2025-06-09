#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class funcionario{ // declaração de classe abstrata funcionário e todos os seus atributos e métodos

    protected:
        std::string nome;
        float salarioBase;

    private:
        int id;

    public:

        void setNome(std::string nome);
        std::string getNome();

        void setSalarioBase(float);
        float getSalarioBase();

        void setId(int id);
        int getId();

        virtual void exibirInfo(); 
        virtual float calcularSalarioFinal() = 0; // declaração de método virtual puro para tornar a classe abstrata

        virtual ~funcionario();

};

class desenvolvedor : public funcionario{  // declaração de subclasse desenvolvedor e seus atributos/métodos específicos

    private:
        int quantidadeDeProjetos;

    public:
        void setQuantidadeDeProjetos(int qt);
        int getQuantidadeDeProjetos();
        float calcularSalarioFinal() override;
        void exibirInfo() override;
};

class gerente : public funcionario{ //declaração de subclasse gerente e seus atributos/métodos específicos

    private:
        float bonusMensal;

    public:
        void setBonusMensal(float bonus);
        float getBonusMensal();
        float calcularSalarioFinal() override;
        void exibirInfo() override;

};

class estagiario : public funcionario{ //declaração de subclasse estagiario e seus atributos/métodos específicos

    private:
        int horasTrabalhadas;
    
    public:
        void setHorasTrabalhadas(int horas);
        int getHorasTrabalhadas();
        float calcularSalarioFinal() override;
        void exibirInfo() override;

};

#endif