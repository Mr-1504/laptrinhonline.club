#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Khởi tạo một queue lưu trữ các số nguyên
    queue<int> myQueue;

    // Thêm phần tử vào queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Hiển thị phần tử đầu tiên trong queue
    cout << "Phan tu dau tien trong queue: " << myQueue.front() << endl;

    // Loại bỏ phần tử đầu tiên khỏi queue
    myQueue.pop();

    // Hiển thị kích thước của queue
    cout << "Kich thuoc cua queue: " << myQueue.size() << endl;

    // Kiểm tra xem queue có trống không
    if (myQueue.empty()) {
        cout << "Queue rong." << endl;
    } else {
        cout << "Queue khong rong." << endl;
    }

    return 0;
}
