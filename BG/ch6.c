
// p. 136 특수문자(escape_sequence)
#include <stdio.h>

int escape_sequence(void)
{
	printf("개행\n개항 \n"); //개행 {중요}
	printf("c언어 \"연습 중\" 입니다."); //큰 따옴표 출력 {중요}
	//printf("\a"); //경고음
	printf("12\b백스페이스 \n"); //백스페이스(backspace)=1칸 지우기
	printf("폼피드\f \n"); //폼피드(form feed)
	printf("캐리지 리\r턴 \n"); //캐리지 리턴(carriage return)=줄 바꿈(?)
	printf("수\t평 탭 \n"); //수평 탭
	printf("수\v직 탭 \n"); //수직 탭
	printf("작은\'따옴표 \n"); //작은 따옴표
	printf("물음표\? \n"); //물음표
	printf("역슬래쉬\\"); //역슬래쉬
	return 0;
}

int main(void)
{
	escape_sequence();
	return 0;
}

