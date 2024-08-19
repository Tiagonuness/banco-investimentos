#include "comandoAutenticar.h"

using namespace std;

AutenticarConta::AutenticarConta(string cpfValue, string nomeValue, string senhaValue) 
    : cpfValue(cpfValue), nomeValue(nomeValue), senhaValue(senhaValue), conta(new Conta()) {
    // Inicialização adicional, se necessário
}

void AutenticarConta::executar() {

    cout << "Executando autenticação para CPF: " << cpfValue 
              << ", Nome: " << nomeValue 
              << ", Senha: " << senhaValue << endl;
    
    cpf.setValor(cpfValue);
    nome.setValor(nomeValue);
    senha.setValor(senhaValue);

    conta->setCpf(cpf);
    conta->setNome(nome);
    conta->setSenha(senha);

    cout << "Autenticação concluída." << endl;
};

AutenticarConta::~AutenticarConta() {
    delete conta;  // Liberar memória alocada para 'conta'
}