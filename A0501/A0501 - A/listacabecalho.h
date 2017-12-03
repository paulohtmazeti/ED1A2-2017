#define MAX_ELEM 10
#define POS_FINAL 1


struct Lista{
    int n;
    char elem[MAX_ELEM];

};

void iniciarLista(struct Lista*);
char acessar (struct Lista,int);
void alterar (struct Lista*,int,char);
void inserir(struct Lista*,int,char);
void remover (struct Lista*, int);
void concatenar(struct Lista*, struct Lista*);
void inverter (struct Lista*);
struct Lista sublista(struct Lista, int,int);
void inserirOrdenado(struct Lista*,int);
void mostrarLista(struct Lista);