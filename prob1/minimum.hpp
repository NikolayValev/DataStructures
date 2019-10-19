#include <stdexcept>

template<typename T>
T minimum ( T values[],  int length) {
    T min = values[0];
    for(int i = 1; i < length; i++){
        if(min > values[i]) min=values[i];
    }
    return min;
}
