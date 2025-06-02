#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
private:
    string description;
    bool completed;
public:
    Task(string desc) {
        description = desc;
        completed = false;
    }

    void complete() {
        completed = true;
    }

    string getDescription() {
        return description;
    }

    bool isCompleted() {
        return completed;
    }

};

class IStorage {
public:
    virtual void addTask(const Task& task) = 0;
    virtual vector<Task>& getTasks() = 0;
    virtual string getStorageType() = 0;
    virtual ~IStorage() = default;
};

class MemoryStorage : public IStorage{
private:
    vector<Task> tasks;
public:
    void addTask(const Task& task) override{
        tasks.push_back(task);
    }
    vector<Task>& getTasks() override {
        return tasks;
    }

    string getStorageType() override {
        return "메모리 저장소";
    }
};

class DBStorage : public IStorage {
private:
    vector<Task> tasks;
public:
    void addTask(const Task& task) override{
        tasks.push_back(task);
    }
    vector<Task>& getTasks() override {
        return tasks;
    }

    string getStorageType() override {
        return "DB 저장소";
    }
};


class TaskManager {
    IStorage* storage;

public:
    TaskManager(IStorage* s) : storage(s) {}

    // 새로운 할 일 추가
    void addTask(const string& description) {
        storage->addTask(Task(description));
    }

    // 현재 할 일 목록 출력
    void showTasks() {
        cout << "저장 방식: " << storage->getStorageType() << "\n";
        vector<Task> tasks = storage->getTasks();
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i].getDescription();
            if (tasks[i].isCompleted()) cout << " [완료]";
            cout << "\n";
        }
    }

    // 특정 할 일을 완료 처리
    void completeTask(size_t index) {
        vector<Task> tasks = storage->getTasks();
        if (index > 0 && index <= tasks.size()) {
            tasks[index - 1].complete();
            storage->addTask(tasks[index - 1]); // 변경된 할 일 저장
        }
        else {
            cout << "잘못된 번호입니다.\n";
        }
    }
};



// 메인 함수
int main() {
    cout << "=== MemoryStorage로 작업 ===\n";
    MemoryStorage memoryStorage;
    TaskManager manager1(&memoryStorage);

    manager1.addTask("C++ 과제 작성하기");
    manager1.addTask("SOLID 원칙 공부하기");

    cout << "\n현재 할 일 목록:\n";
    manager1.showTasks();

    manager1.completeTask(1);

    cout << "\n업데이트된 할 일 목록:\n";
    manager1.showTasks();

    cout << "\n=== DBStorage로 작업 ===\n";
    DBStorage dbStorage;
    TaskManager manager2(&dbStorage);

    manager2.addTask("DB 작업 테스트");
    manager2.addTask("To-Do 목록 추가");

    cout << "\n현재 할 일 목록:\n";
    manager2.showTasks();

    manager2.completeTask(2);

    cout << "\n업데이트된 할 일 목록:\n";
    manager2.showTasks();

    return 0;
}
