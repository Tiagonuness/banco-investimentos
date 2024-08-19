#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED
#include "../entidades/entidades.h"

class Servicos {
public:
    virtual ~Servicos() = default;
    virtual bool autenticar(Conta*) = 0;
    // virtual bool criar(Conta) = 0;
    // virtual bool recuperar(Conta*) = 0;
    // virtual bool atualizar(Conta*) = 0;
    // virtual bool excluir(Conta*) = 0;
};

class ControladoraDeServicos : public Servicos {
public:
    bool autenticar(Conta*) override;
    // bool criar(Conta) override;
    // bool recuperar(Conta*) override;
    // bool atualizar(Conta*) override;
    // bool excluir(Conta*) override;
};

#endif