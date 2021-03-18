#include <iostream>
template <class Num>
    class NumOperate{
        private: Num o_Num1;
        private: Num o_Num2;
        public: NumOperate(Num o_NumA, Num o_NumB){
                    o_Num1  =   o_NumA;
                    o_Num2  =   o_NumB;
                }
        public: Num fn_GetAdd(){
            return o_Num1+ o_Num2;
        }
        public: Num fn_GetMinus(){
            return o_Num1- o_Num2;
        }
        public: Num fn_GetPro(){
            return o_Num1* o_Num2;
        }
        public: Num fn_GetDiv(){
            return o_Num1/ o_Num2;
        }
    };

int main(){
    NumOperate<int> o_IntOP(7, 3);
    std::cout<< "+:" << o_IntOP.fn_GetAdd() << ", -:" << o_IntOP.fn_GetMinus()<<
                ", *:" << o_IntOP.fn_GetPro()<< ", /:"<< o_IntOP.fn_GetDiv() << "\n";

    NumOperate<float> o_FloatOP(7.0f, 3.0f);
    std::cout<< "+:" << o_FloatOP.fn_GetAdd() << ", -:" << o_FloatOP.fn_GetMinus()<<
                ", *:" << o_FloatOP.fn_GetPro()<< ", /:"<< o_FloatOP.fn_GetDiv() << "\n";

    NumOperate<double> o_DoubleOP(7.0, 3.0);
    std::cout<< "+:" << o_DoubleOP.fn_GetAdd() << ", -:" << o_DoubleOP.fn_GetMinus()<<
                ", *:" << o_DoubleOP.fn_GetPro()<< ", /:"<< o_DoubleOP.fn_GetDiv() << "\n";

    return 0;
}
