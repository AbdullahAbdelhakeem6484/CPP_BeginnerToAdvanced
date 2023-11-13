#include "threads.h"

using namespace std::chrono_literals ;

std::promise<int> p_data;

void Provider(){
    uint8_t i=0;
    while(1){

        std::this_thread::sleep_for(600ms);
        p_data.set_value(i);
        i++;
        std::cout<<"Thread Provider running"<<std::endl;
        p_data = std::promise<int>();
    }

}
void Receiver(MainWindow & _w){
    auto fu =p_data.get_future();

    while(1){
        uint32_t value =fu.get();

        std::cout<<"thread reciver runnig"<<std::endl;
        std::cout<<value<<std::endl;

        _w.updateNumber(value);

        fu =p_data.get_future();
    }

}
