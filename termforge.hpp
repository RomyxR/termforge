#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <random>

using namespace std;


//Функция для создания символа в нужной точке сколько хочешь раз
int setpix(char sim, int range = 0, int pixels = 1){
for (int i = 1; i <= range; i++){
cout <<" ";
}
for (int i = 1; i <= pixels; i++){
cout << sim;
}
cout <<"\n";
return 0;
}

//Функция для задержек в милисекундах
void delay(int millisec) {
this_thread::sleep_for(chrono::milliseconds(millisec));
}

//Функция для для генерации рандомных чисел в заданном диопазоне
int erand(int start, int end){
random_device system_rand;
srand(system_rand());
int randgen = rand() % (end - start + 1) + start;
return randgen;
}



