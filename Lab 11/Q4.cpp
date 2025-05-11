#include <iostream>
#include <stdexcept>
using namespace std;




class DatabaseException : public exception {
public:
    const char* what() const noexcept override {
        return "A Database Error Occurred";
    }
};


class ConnectionFailedException : public DatabaseException {};
class QueryTimeoutException : public DatabaseException {};


template <typename T>
class DatabaseConnector {
    T value;

public:
    DatabaseConnector(T value) : value(value) {}

    void connect() {
        cout << "Attempting to connect to invalid DB: " << value << endl;
        throw ConnectionFailedException(); // Let it propagate
    }

    void timeout() {
        cout << "Attempting to query slow DB: " << value << endl;
        throw QueryTimeoutException(); // Let it propagate
    }
};

int main() {
    try {
        DatabaseConnector<string> db("Invalid_DB");
        db.connect();
    }
    catch (const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }

    try {
        DatabaseConnector<string> db("Slow_DB");
        db.timeout();
    }
    catch (const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }

    return 0;
}
