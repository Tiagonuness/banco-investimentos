#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "../dominios/dominios.h"

class Entidade {
public:
    virtual ~Entidade() = default;
    virtual void setId() = 0;
    virtual string getId() = 0;
};

class Pagamento : public Entidade {
private:
    CodigoDePagamento codigo;
    Data data;
    Percentual percentual;
    Estado estado;
    string Id;
public:
    void setId() override;
    string getId() override {return Id;};
    void setCodigoPagamento(const CodigoDePagamento&);
    CodigoDePagamento getCodigoPagamento() const {return codigo;};
    void setData(const Data&);
    Data getData() const {return data;};
    void setPercentual(const Percentual&);
    Percentual getPercentual() const {return percentual;};
    void setEstado(const Estado&);
    Estado getEstado() const {return estado;};
};

class Titulo : public Entidade {
private:
    CodigoDeTitulo codigo;
    Nome emissor;
    Setor setor;
    Data emissao;
    Data vencimento;
    Dinheiro valor;
    string Id;
public:
    void setId() override;
    string getId() override {return Id;};
    void setCodigoTitulo(const CodigoDeTitulo&);
    CodigoDeTitulo getCodigoTitulo() const {return codigo;};
    void setNome(const Nome&);
    Nome getNome() const {return emissor;};
    void setSetor(const Setor&);
    Setor getSetor() const {return setor;};
    void setDataEmissao(const Data&);
    Data getDataEmissao() const {return emissao;};
    void setDataVencimento(const Data&);
    Data getDataVencimento() const {return vencimento;};
    void setDinheiro(const Dinheiro&);
    Dinheiro getDinheiro() const {return valor;};
};

class Conta : public Entidade {
private:
    Cpf cpf;
    Nome nome;
    Senha senha;
    string Id;
public:
    void setId() override;
    string getId() override {return Id;};
    void setCpf(const Cpf&);
    Cpf getCpf() const {return cpf;};
    void setNome(const Nome&);
    Nome getNome() const {return nome;};
    void setSenha(const Senha&);
    Senha getSenha() const {return senha;};
};

#endif // ENTIDADES_H