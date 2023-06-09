#include <stdio.h>

int main() //함수, 작업을 수행하는 문장은 함수 안에 들어가야 함, 함수 이름이 main.
{
    int x = 10;//첫번쨰 정수를 저장하는 변수, 변수 이름이 x.
    int y = 010;//두번째 정수를 저장하는 변수
    int z = 0x10;//세번쨰 정수를 저장하는 변수, 한 줄에 여러개의 변수 선언이 가능 ex) int x, y, z; 이런 식으로.

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;//return은 함수를 종료시키면서 값을 반환하는 키워드이다, 값을 반환하기 위해서는 return 다음에 반환값을 써주면 된다.
}
// 식별자는 영문자와 숫자, 밑줄 문자_로 이루어진다.
//식별자의 중간에 공백이 들어가면 안 된다.
//식별자의 첫 글자는 반드시 영문자 또는 밑줄 기호_이여야 한다. 식별자는 숫자로 시작할 수 없다.
//대문자와 소문자는 구별된다. 따라서 변수 index와 Index, INDEX는 모두 다른 변수이다.
//C언어의 키워드와 똑같은 식별자는 허용되지 않는다. ex) int, double, if, const, char, else, float 등등
//변수의 이름 sum : 영문 알파벳 문자로 시작, _count : 밑줄 문자로 시작할 수 있다, number_of_pictures : 중간에 밑줄 문자를 넣을 수 있다, King3 : 맨 처음이 아니라면 숫자도 넣을 수 있다.
//변수의 이름 잘못된 예 2nd_base : 숫자로 시작할 수 없다, money# : #과 같은 기호는 사용할 수 없다, double : double은 C언어의 키워드이다.
//%d, %f 이런 친구들은 형식 지정자.
//%d : 10진 정수로 출력, %f : 실수로 출력, %c : 문자로 출력, %s : 문자열로 출력
//형식 지정자와 변수의 자료형은 반드시 일치하여야 한다.
//scanf("%d", &x);에서 %d는 형식 지정자, &x는 값을 저장할 변수의 주소이다. 변수의 주소에는 &를 붙여야 한다.
//scanf의 형식지정자 (대부분 printf와 같다.) %lf는 double.
//scanf오류가 발생하면 소수파일의 처음에서 #define_CRT_SECURE_NO_WARNINGS을 정의해준다.
//자료형(data type) : 데이터의 타입(종류), short, int, long : 정수형