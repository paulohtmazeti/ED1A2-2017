struct No {
    int dado;
    struct No *prox;
};

struct No2 {
    int dado;
    struct No2 *prox;
    struct No2 *ant;
};

void montarListaSimples();
void listarListaSimples();
void montarListaDupla();
void listarListaDupla();

