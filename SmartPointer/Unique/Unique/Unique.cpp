#include <iostream>
#include <memory>
using namespace std;

class Logger {
private:
    int logCount;

public:
    Logger(int logCount = 0) {
        this->logCount = logCount;
    }
    
    void logInfo(string message){
        cout << "[INFO]: " << message << endl;
        logCount++;
    }
    void logWarning(string message) {
        cout << "[WARNING]: " << message << endl;
        logCount++;
    }
    void logError(string message) {
        cout << "[ERROR]: " << message << endl;
        logCount++;
    }
    void showTotalLogs(){
        cout << "Total logs recorded: " << logCount<<endl;
    }
    ~Logger() {
        cout << "Logger instance destroyed.: " << endl;
    }

};

int main() {
    
    unique_ptr<Logger> myLog = make_unique<Logger>(0);
    myLog->logInfo("System is starting.");
    myLog->logWarning("Low disk space.");
    myLog->logError("Unable to connect to the server.");
    myLog->showTotalLogs();

    return 0;
}
