Это библеотека сможет помочь упростить работу с выводом в терминал информации и добавить упрощёные функции.


erand()
```
#include <iostream>
#include "termforge.hpp"

using namespace std;

int main(){
// Функция для вывода рандомного числа в консоль от 0 до 50.
cout << erand(0,50);

return 0;
}
```

delay()
```
#include <iostream>
#include "termforge.hpp"

using namespace std;

int main(){
cout << "I love ";
// Функция делает задержку в милисекундах. Сейчас там выставлено 5000, то есть 5 секунд.
delay(5000)

cout << "pelneni";
return 0;
}
```

setpix()
```
#include <iostream>
#include "termforge.hpp"

using namespace std;

int main(){
//Эта функция выводит определённый символ через сколько угодно отступов и сколько угодно самих символов
setpix('#', 3, 5);
return 0;
//Вывод:   #####
```
