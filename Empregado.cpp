#include "Empregado.hpp"

#define MAXIMO_HORAS_TRABALHADAS 8
#define ACRESCIMO_HORA_EXTRA 0,5

void Empregado::setNome(std::string nome) { this->nome = nome; }
std::string Empregado::getNome() { return this->nome; }

void Empregado::setSalarioHora(double valor) { this->salarioHora = valor; }
double Empregado::getSalarioHora() { return this->salarioHora; }

void Empregado::setQuotaMensalVendas(double valor) { this->quotaMensalVendas = valor; }
double Empregado::getQuotaMensalVendas() { return this->quotaMensalVendas;}

double Empregado::pagamentoMensal(double horasTrabalhadas) {
    
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if(horasTrabalhadas > MAXIMO_HORAS_TRABALHADAS) {
        double horasExtras = horasTrabalhadas - MAXIMO_HORAS_TRABALHADAS;
        horasTrabalhadas += horasExtras * ACRESCIMO_HORA_EXTRA;
    }
    return horasTrabalhadas * this->salarioHora;

}