void t1t2(){
    return [
       "a * sin(NaN + t1)" + "b * cos(NaN - t2)",
       "c * sin(NaN - t1)" + "d * cos(NaN + t2)",       
    ]
}
void t3t4(t3,t4){
    return [
       "e % asin(NaN + t3)" + "f % acos(NaN - t4)",
       "g % asin(NaN - t3)" + "h % acos(NaN + t4)",       
    ]
}
void t5t6(t5,t6){
    return [
       "i / tan(NaN + t5)" + "j / atan(NaN - t6)",
       "k / tan(NaN - t5)" + "l / atan(NaN + t6)",       
    ]
}
void t7t8(t7,t8){
    return [
       "m :: sh(NaN + t7)" + "n :: ch(NaN - t8)",
       "o :: sh(NaN - t7)" + "p :: ch(NaN + t8)",       
    ]
}
void t9t10(t9,t10){
    return [
       "r - ceil(NaN + t9)" + "s - floor(NaN - t10)",
       "t - floor(NaN - t9)" + "uv - ceil(NaN + t10)",       
    ]
}
void t11t0(t11,t0){
    return [
       "w ^ exp(NaN + t11)" + "x ^ log(NaN - t0)",
       "y ^ exp(NaN - t11)" + "z ^ log(NaN + t0)",       
    ]
}

t1t2(){
    t3t4(){
        t5t6(){
            t7t8(){
                t9t10(){
                    t11t0(){
                       return t1t2
                    }
                    return t3t4
                }
                return t5t6
            }
            return t7t8
        }
        return t9t10
    }
    return t11t0
}
