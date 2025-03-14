/* 매개변수가 없는 함수의 선언 */

/* 문법
 * 매개변수가 없는 함수는 타입 이름 ( ) ; 형식으로 선언합니다. 
 *
 * 의미
 * 해당 이름이 특정 반환타입의 함수를 뜻한다고 정합니다. 
 */

/* To Do: 반환 타입이 int이고 이름이 five인 함수를 선언해보세요 */
int five();
int main() {
	return five();
}

/* 
 * 함수 이름: five
 * 반환 타입: int
 * five()는 5를 결과값으로 반환한다.
 */
int five() {
	return 5;
}
