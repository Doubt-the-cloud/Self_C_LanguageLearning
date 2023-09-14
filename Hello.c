#include <stdio.h>

void sum(int begin, int end){
    int i;
    int sum = 0;
    
    for(i = begin; i <= end; i++){
        sum += i;
    }
    printf("from dingding %d +...+ %d =  %d", begin, end, sum);
}

// 设计求和函数sum(a, b), 求和a到b
int main() {
    sum(1,10);
    printf("Hello Github ");
    return 0;
}
