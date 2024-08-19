#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED
#include "../servicosBanco/servicos.h"

class ComandoIAConta {
public:
    virtual ~ComandoIAConta() = default; /// Metodo por meio do qual e solicitada a execucao do comando.
    virtual void executar() = 0;
};

class AutenticarConta : public ComandoIAConta {
private:
    Servicos* teste;
    string cpfValue, nomeValue, senhaValue;
    Conta* conta;
    Cpf cpf;
    Nome nome;
    Senha senha;

public:
    AutenticarConta(string cpfValue, string nomeValue, string senhaValue);
    void executar() override;
};

#endif