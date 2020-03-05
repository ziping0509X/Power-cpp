//剑指第12题
//给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
//保证base和exponent不同时为0

class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent>0){
            int n=exponent;
            double temp=base;
            for(int i=1;i<exponent;i++){
                base=base*temp;
            }
            return base;
        }
        if(exponent==0)
            return 1;
        if(exponent<0){
            base=1/base;
            double temp=base;
            int n=exponent*(-1);
            for(int i=1;i<n;i++){
                base=base*temp;
            }
            return base;
        }


    }
};