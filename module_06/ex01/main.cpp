#include <iostream>

typedef struct t_Data
{
    int x;
    int y;
} Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr)
{
    return (reinterpret_cast<Data*>(ptr));
}

int main()
{
    Data *pData = new Data();
    pData->x = 10;
    pData->y = 20;
    uintptr_t test = serialize(pData);
    Data *pData2 = deserialize(test);
    std::cout << pData2->x << std::endl;
    std::cout << pData2->y << std::endl;
    return 0;
}
