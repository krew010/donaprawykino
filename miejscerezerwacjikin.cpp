#include <iostream>
//miejsca w kinie 3x4
bool czyzajete(int x, int y, int miejsca[3][4]){
    if (miejsca[x][y] == 1 ){
        return true;
    } else {
        return false;
    }
    
}

int main(){
    std::cout << "Witaj w systemie rezerwacji miejsc w kinie!" << std::endl;
    std::cout << "Podaj nr miejsca : " << std::endl;
    int x, y;
    std::cin >> x >> y;


int miejsca[3][4];
for (int i=0; i<3; i++){
    for (int j=0; j<4; j++){
        if (j % 2 == 0)        {
            miejsca[i][j] = 1;
        } else {
            miejsca[i][j] = 0;
        }
        
    }
    }
std::cout << std::endl;
if(czyzajete(x, y, miejsca[3][4])){
    std::cout << "Miejsce jest zajete, wybierz inne miejsce!" << std::endl;
} else {
    std::cout << "Miejsce jest wolne, rezerwacja udana!" << std::endl;
}


    return 0;
}