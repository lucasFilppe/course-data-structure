//especificaçoes

//estrutura do vetor
typedef struct float_vector FloatVector;

FloatVector *create(int capacity);
void destroy(FloatVector **vec);
int size(const FloatVector *vec);
int capacity(const FloatVector *vec);
int at(const FloatVector *vec, int index);

int get(const FloatVector *vec, int index);

void append(FloatVector *vec, float val);

void set(const FloatVector *vec, int index, float val);
void imprime(const FloatVector *vec);




