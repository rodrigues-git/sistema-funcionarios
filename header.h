#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class funcionario{

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
        virtual float calcularSalarioFinal() = 0;

        virtual ~funcionario();

};

class desenvolvedor : public funcionario{

    private:
        int quantidadeDeProjetos;

    public:
        void setQuantidadeDeProjetos(int qt);
        int getQuantidadeDeProjetos();
        float calcularSalarioFinal() override;
        void exibirInfo() override;
};

class gerente : public funcionario{

    private:
        float bonusMensal;

    public:
        void setBonusMensal(float bonus);
        float getBonusMensal();
        float calcularSalarioFinal() override;
        void exibirInfo() override;

};

class estagiario : public funcionario{

    private:
        int horasTrabalhadas;
    
    public:
        void setHorasTrabalhadas(int horas);
        int getHorasTrabalhadas();
        float calcularSalarioFinal() override;
        void exibirInfo() override;

};


#endif