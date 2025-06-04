#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 고객 인터페이스 (Observer 역할)
class Customer {
public:
    virtual void update(const string& status) = 0; // 순수 가상 함수
};

// 일반 고객 클래스
class RegularCustomer : public Customer {
private:
    string name;
public:
    RegularCustomer(const string& name) : name(name) {}

    void update(const string& status) {
        cout << "Regular customer " << name << " received update: " << status << endl;
    }
};

// TODO: VIP 고객 클래스 (Customer를 상속받아 구현)
// 요구 사항:
// - 고객 이름을 저장하는 멤버 변수 `name`을 추가하세요.
// - 생성자에서 이름을 초기화하세요.
// - `update` 메서드를 구현하여 "VIP customer [이름] received VIP update: [배송 상태]" 형식으로 출력되도록 하세요.

class VIPCustomer : public Customer {
private:
    string name;
public:
    VIPCustomer(const string& name) : name(name) {}
    void update(const string& status) {
        cout << "VIP customer " << name << " received update: " << status << endl;
    }
};

// TODO: Business 고객 클래스 (Customer를 상속받아 구현)
// 요구 사항:
// - 고객 이름을 저장하는 멤버 변수 `name`을 추가하세요.
// - 생성자에서 이름을 초기화하세요.
// - `update` 메서드를 구현하여 "Business customer [이름] received Business update: [배송 상태]" 형식으로 출력되도록 하세요.

class BusinessCustomer : public Customer {
private:
    string name;
public:
    BusinessCustomer(const string& name) : name(name) {}
    void update(const string& status) {
        cout << "Business customer " << name << " received update: " << status << endl;
    }
};
// TODO: 배송 회사 클래스 (DeliveryService)
// 요구 사항:
// - `customers`라는 고객 리스트를 저장하는 멤버 변수를 추가하세요.
// - `currentStatus`라는 현재 배송 상태를 저장하는 멤버 변수를 추가하세요.
// - 고객을 추가하는 `addCustomer` 메서드를 구현하세요.
// - 고객을 제거하는 `removeCustomer` 메서드를 구현하세요.
// - 배송 상태를 업데이트하고 모든 고객에게 알리는 `updateStatus` 메서드를 구현하세요.
// - 등록된 모든 고객에게 상태를 전달하는 `notifyCustomers` 메서드를 구현하세요.
class DeliveryService {
private:
    vector<Customer*> customers;
    string currentStatus;
public:
    void addCustomer(Customer* customer) {
        customers.push_back(customer);
    }

    void removeCustomer(Customer* customer) {
        auto it = find(customers.begin(), customers.end(), customer);
        it = customers.erase(it);
    }

    void updateStatus(string status) {
        currentStatus = status;
        notifyCustomers();
    }

    void notifyCustomers() {
        for (Customer* customer : customers) {
            customer->update(currentStatus);
        }
    }

};


// Main 함수
int main() {
    DeliveryService service;

    // 고객 객체 생성
    RegularCustomer* customer1 = new RegularCustomer("Alice");
    VIPCustomer* customer2 = new VIPCustomer("Bob");
    BusinessCustomer* customer3 = new BusinessCustomer("CompanyX");

    // 고객 등록
    service.addCustomer(customer1);
    service.addCustomer(customer2);
    service.addCustomer(customer3);

    // 배송 상태 업데이트 및 알림
    cout << "Updating status: 배송 준비 중" << endl;
    service.updateStatus("배송 준비 중");

    cout << "\nUpdating status: 배송 완료" << endl;
    service.updateStatus("배송 완료");

    // 메모리 해제
    delete customer1;
    delete customer2;
    delete customer3;

    return 0;
}