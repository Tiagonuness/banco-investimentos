#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

class ComandoIAConta {
public:
    virtual ~ComandoIAConta() = default; /// Metodo por meio do qual e solicitada a execucao do comando.
    virtual void executar() = 0;
};



#endif // COMANDOS_H_INCLUDED