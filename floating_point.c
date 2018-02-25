//p60
//List3-2

#include <stdio.h>
#include <string.h>
 
int main(void)
{
    float f;
    unsigned long l;
    int i;
    char s[80];

    //浮動小数点数表現を調べたい数を10進数で指定する
    // f = (float)0.75;
    f = (float)0.1;

    //float型の値をunsigned long型の変数に格納する
    memcpy(&l, &f, 4);

    //1ビットずつ取り出す
    for (i = 33; i >= 0; i--){
        if ((i == 1) || (i == 10)){
            //区切りにハイフンを挿入する
            s[i] = '-';
        }else{
            if (l % 2 == 1){
                s[i] = '1';
            }else{
                s[i] = '0';
            }
            l /= 2;
        }
    }
    
    s[34] = '\0';

    //結果を表示
    printf(s, "単精度浮動小数点数の表し方");

    return 0;
}