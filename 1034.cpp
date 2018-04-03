#include <iostream>
using namespace std;

struct fraction{
    long mol;//分子
    long den;//分母
};

void Simple(long a, long b){
    long temp, temp1, temp2;
    temp = a;
    temp1 = b;
    while (temp1) {
        temp2 = temp % temp1;
        temp = temp1;
        temp1 = temp2;
    }
    a = a / temp;
    b = b / temp;
    printf("%ld/%ld", a, b);
}

void printFraction(fraction a){
    if (a.den < 0) {
        a.mol *= -1;
        a.den *= -1;
    }
    if (a.den == 0) {
        cout << "Inf" << endl;
        return;
    }
    if (a.mol == 0) {
        cout << '0';
        return;
    }
    int flag = 1;
    if (a.mol < 0) {
        cout << '(' << '-';
        a.mol = -a.mol;
        flag = 0;
    }
    if (a.mol / a.den != 0) cout << a.mol / a.den;
    if (a.mol / a.den != 0 && a.mol % a.den != 0) cout << ' ';
    if (a.mol % a.den != 0) Simple(a.mol % a.den, a.den);
    if (flag == 0) cout << ')';
}

fraction add_f(fraction a, fraction b){
    fraction temp;
    temp.mol = a.mol * b.den + a.den * b.mol;
    temp.den = a.den * b.den;
    return temp;
}

fraction minus_f(fraction a, fraction b){
    fraction temp;
    temp.mol = a.mol * b.den - a.den * b.mol;
    temp.den = a.den * b.den;
    return temp;
}

fraction mul_f(fraction a, fraction b){
    fraction temp;
    temp.mol = a.mol * b.mol;
    temp.den = a.den * b.den;
    return temp;
}

fraction div_f(fraction a, fraction b){
    fraction temp;
    temp.mol = a.mol * b.den;
    temp.den = a.den * b.mol;
    return temp;
}

int main(int argc, const char * argv[]) {
    fraction a, b;
    scanf("%ld/%ld %ld/%ld",&a.mol, &a.den, &b.mol, &b.den);
    printFraction(a);
    printf(" + ");
    printFraction(b);
    printf(" = ");
    printFraction(add_f(a, b));
    printf("\n");
    printFraction(a);
    printf(" - ");
    printFraction(b);
    printf(" = ");
    printFraction(minus_f(a, b));
    printf("\n");
    printFraction(a);
    printf(" * ");
    printFraction(b);
    printf(" = ");
    printFraction(mul_f(a, b));
    printf("\n");
    printFraction(a);
    printf(" / ");
    printFraction(b);
    printf(" = ");
    printFraction(div_f(a, b));
    return 0;
}
//此题不难但非常繁琐，心态有点不好导致代码冗长，后期有时间修改
//问题主要在后面两个测试点，一个题设是输入不超过int，但乘积加法有可能超，所以设置long
//其次是考虑最简化问题
