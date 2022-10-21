#include "human.h"
#include <string>
class teacher : public human {
    // Конструктор класса teacher
    public:
        teacher(std::string last_name, std::string name, std::string second_name,unsigned int work_time ) 
        : human( last_name, name, second_name) {
            this->work_time = work_time;
        }
        
        unsigned int get_work_time()
        {
            return this->work_time;
        }

        void get_info() {
            human::get_info();
            std::cout << "Status: teacher\n" << "Work hours: " << get_work_time() << std::endl;
        }

    private:
        unsigned int work_time;
};