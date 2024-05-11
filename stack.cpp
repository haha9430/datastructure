#include "stack.h"

// TODO: Stack 클래스 구현 작성
// Stack의 정의에 맞게 데이터를 삽입한다.
void Stack::push(int data) {
    insert(0, data);
}
// Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
int Stack::pop() {
    int data = head_->value_;
    remove(0);
    return data;
}
// Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
int Stack::peek() {
    return head_->value_;
}
// push와 동일한 역할을 하는 피연산자가 int인 += 연산자를 오버로딩
void Stack::operator+=(int data) {
    insert(0, data);
}