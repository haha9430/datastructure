#include "queue.h"

// TODO: Queue 클래스 구현 작성
// Stack의 정의에 맞게 데이터를 삽입한다.
void Queue::push(int data) {
    insert(size_, data);
}
// Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
int Queue::pop() {
    int data = head_->value_;
    remove(0);
    return data;
}
// Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
int Queue::peek() {
    return head_->value_;
}
// Queue와 동일한 역할을 하는 피연산자가 int인 += 연산자를 오버로딩
void Queue::operator+=(int data) {
    insert(size_, data);
}